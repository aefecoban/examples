function R(f) {
    if(document.readyState != "loading"){
        f();
    }else{
        document.addEventListener("DOMContentLoaded", f);
    }
}

R(() => {

    const template = document.createElement("template");
    template.innerHTML = `<p><slot /></p>`;

    class preparePage extends HTMLElement {
        constructor() {
            super();

            this.attachShadow(
                {
                    mode: "open"
                }
            );

            var title = this.getAttribute("h");

            this.shadowRoot.appendChild(template.content.cloneNode(true));

            var code = this.shadowRoot.innerHTML;
            this.shadowRoot.innerHTML = '<style></style><h1></h1><hr>' + code;

            this.shadowRoot.querySelector("h1").innerHTML = title;

            this.shadowRoot.querySelector("style").innerHTML = `
            *{
                padding: 0;
                margin: 0;
            }

            h1{
                text-align: center;
                cursor: pointer;
            }
            hr{
                width: 90%;
                margin: auto;
                border: 0;
                height: 10px;
                background-color: #222;
                border-radius: 50%;
            }
            p{
                width: 90%;
                margin: auto;
                padding: 15px;
                box-sizing: border-box;
            }
            `;

        }

        connectedCallback(){

            var h = this.shadowRoot.querySelector("h1");

            h.addEventListener("click", () => {
                alert(h.innerHTML);
            });

        }
    }

    window.customElements.define("prepare-page", preparePage);

});
