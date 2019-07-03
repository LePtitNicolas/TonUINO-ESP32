const char compile_date[] = __DATE__ " " __TIME__;

String getFooter() {
  String footer = "<footer class='footer' style='position: fixed; bottom: 0; left: 0; width: 100%; background: white'>";
  footer += "<div class='footer'>";
  footer += "<p class='text-muted'>Version: 3.1 compiletime: ";
  footer += compile_date;
  footer += "</p>";
  footer += "</div>";
  footer += "</footer>";
  return footer;
}

// HTML page to be displayed
String getPage(){
String page = "<!DOCTYPE html>";
page += "<html>";
page += "<head>";
page += "<title>TonUINO Interface</title>";
page += "<meta name='viewport' content='width=device-width, initial-scale=1'>";
page += "<meta name='author' content='C. Ulbrich'>";
//page += "  <link rel='stylesheet' href='bootstrap.min.local.css'> ";
page += "  ";
page += "  </head>";
page += "  <style>";
page += "angular.module('app', ['color.picker']);  ";
page += ".slidecontainer {";
page += "    width: 100%;";
page += "}";
page += ".slider {";
page += "    -webkit-appearance: none;";
page += "    width: 100%;";
page += "    height: 15px;";
page += "    border-radius: 5px;";
page += "    background: #d3d3d3;";
page += "    outline: none;";
page += "    opacity: 0.7;";
page += "    -webkit-transition: .2s;";
page += "    transition: opacity .2s;";
page += "}";
page += ".slider:hover {";
page += "    opacity: 1;";
page += "}";
page += ".slider::-webkit-slider-thumb {";
page += "    -webkit-appearance: none;";
page += "    appearance: none;";
page += "    width: 25px;";
page += "    height: 25px;";
page += "    border-radius: 50%;";
page += "    background: #FF7811;";
page += "    cursor: pointer;";
page += "}";
page += ".slider::-moz-range-thumb {";
page += "    width: 25px;";
page += "    height: 25px;";
page += "    border-radius: 50%;";
page += "    background: #FF7811;";
page += "    cursor: pointer;";
page += "}";
page += "";




page += ":root {";
page += " --blue: #446E9B;";
page += " --indigo: #6610f2;";
page += " --purple: #6f42c1;";
page += " --pink: #e83e8c;";
page += " --red: #CD0200;";
page += " --orange: #fd7e14;";
page += " --yellow: #D47500;";
page += " --green: #3CB521;";
page += " --teal: #20c997;";
page += " --cyan: #3399F3;";
page += " --white: #fff;";
page += " --gray: #777;";
page += " --gray-dark: #333;";
page += " --primary: #446E9B;";
page += " --secondary: #999;";
page += " --success: #3CB521;";
page += " --info: #3399F3;";
page += " --warning: #D47500;";
page += " --danger: #CD0200;";
page += " --light: #eee;";
page += " --dark: #333;";
page += " --breakpoint-xs: 0;";
page += " --breakpoint-sm: 576px;";
page += " --breakpoint-md: 768px;";
page += " --breakpoint-lg: 992px;";
page += " --breakpoint-xl: 1200px;";
page += " --font-family-sans-serif: \"Open Sans\", -apple-system, BlinkMacSystemFont, \"Segoe UI\", Roboto, \"Helvetica Neue\", Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";";
page += " --font-family-monospace: SFMono-Regular, Menlo, Monaco, Consolas, \"Liberation Mono\", \"Courier New\", monospace";
page += "}";
page += "*,*::before,*::after {";
page += " -webkit-box-sizing:border-box;";
page += " box-sizing:border-box";
page += "}";
page += "html {";
page += " font-family:sans-serif;";
page += " line-height:1.15;";
page += " -webkit-text-size-adjust:100%;";
page += " -webkit-tap-highlight-color:rgba(0,0,0,0)";
page += "}";
page += "footer {";
page += " display:block";
page += "}";
page += "body {";
page += " margin:0;";
page += " font-family:\"Open Sans\", -apple-system, BlinkMacSystemFont, \"Segoe UI\", Roboto, \"Helvetica Neue\", Arial, sans-serif, \"Apple Color Emoji\", \"Segoe UI Emoji\", \"Segoe UI Symbol\";";
page += " font-size:1rem;";
page += " font-weight:400;";
page += " line-height:1.5;";
page += " color:#777;";
page += " text-align:left;";
page += " background-color:#fff";
page += "}";
page += "hr {";
page += " -webkit-box-sizing:content-box;";
page += " box-sizing:content-box;";
page += " height:0;";
page += " overflow:visible";
page += "}";
page += "h1 {";
page += " margin-top:0;";
page += " margin-bottom:0.5rem";
page += "}";
page += "p {";
page += " margin-top:0;";
page += " margin-bottom:1rem";
page += "}";
page += "ol {";
page += " margin-top:0;";
page += " margin-bottom:1rem";
page += "}";
page += "b {";
page += " font-weight:bolder";
page += "}";
page += "a {";
page += " color:#3399F3;";
page += " text-decoration:none;";
page += " background-color:transparent";
page += "}";
page += "a:hover {";
page += " color:#0c73cd;";
page += " text-decoration:underline";
page += "}";
page += "table {";
page += " border-collapse:collapse";
page += "}";
page += "th {";
page += " text-align:inherit";
page += "}";
page += "label {";
page += " display:inline-block;";
page += " margin-bottom:0.5rem";
page += "}";
page += "input {";
page += " margin:0;";
page += " font-family:inherit;";
page += " font-size:inherit;";
page += " line-height:inherit";
page += "}";
page += "input {";
page += " overflow:visible";
page += "}";
page += "[type=\"submit\"] {";
page += " -webkit-appearance:button";
page += "}";
page += "button:not(:disabled),[type=\"button\"]:not(:disabled),[type=\"reset\"]:not(:disabled),[type=\"submit\"]:not(:disabled) {";
page += " cursor:pointer";
page += "}";
page += "[type=\"submit\"]::-moz-focus-inner {";
page += " padding:0;";
page += " border-style:none";
page += "}";
page += "input[type=\"checkbox\"] {";
page += " -webkit-box-sizing:border-box;";
page += " box-sizing:border-box;";
page += " padding:0";
page += "}";
page += "input[type=\"time\"] {";
page += " -webkit-appearance:listbox";
page += "}";
page += "::-webkit-file-upload-button {";
page += " font:inherit;";
page += " -webkit-appearance:button";
page += "}";
page += "h1 {";
page += " margin-bottom:0.5rem;";
page += " font-weight:500;";
page += " line-height:1.2;";
page += " color:#2d2d2d";
page += "}";
page += "h1 {";
page += " font-size:2.5rem";
page += "}";
page += ".display-3 {";
page += " font-size:4.5rem;";
page += " font-weight:300;";
page += " line-height:1.2";
page += "}";
page += "hr {";
page += " margin-top:1rem;";
page += " margin-bottom:1rem;";
page += " border:0;";
page += " border-top:1px solid rgba(0,0,0,0.1)";
page += "}";
page += ".blockquote {";
page += " margin-bottom:1rem;";
page += " font-size:1.25rem";
page += "}";
page += ".container {";
page += " width:100%;";
page += " padding-right:15px;";
page += " padding-left:15px;";
page += " margin-right:auto;";
page += " margin-left:auto";
page += "}";
page += "@media (min-width: 576px) {";
page += " .container {";
page += "  max-width:540px";
page += " }";
page += "}";
page += "@media (min-width: 768px) {";
page += " .container {";
page += "  max-width:720px";
page += " }";
page += "}";
page += "@media (min-width: 992px) {";
page += " .container {";
page += "  max-width:960px";
page += " }";
page += "}";
page += "@media (min-width: 1200px) {";
page += " .container {";
page += "  max-width:1140px";
page += " }";
page += "}";
page += ".row {";
page += " display:-webkit-box;";
page += " display:-ms-flexbox;";
page += " display:flex;";
page += " -ms-flex-wrap:wrap;";
page += " flex-wrap:wrap;";
page += " margin-right:-15px;";
page += " margin-left:-15px";
page += "}";
page += ".col-md-12 {";
page += " position:relative;";
page += " width:100%;";
page += " padding-right:15px;";
page += " padding-left:15px";
page += "}";
page += "@media (min-width: 768px) {";
page += " .col-md-12 {";
page += "  -webkit-box-flex:0;";
page += "  -ms-flex:0 0 100%;";
page += "  flex:0 0 100%;";
page += "  max-width:100%";
page += " }";
page += "}";
page += ".btn {";
page += " display:inline-block;";
page += " font-weight:400;";
page += " color:#777;";
page += " text-align:center;";
page += " vertical-align:middle;";
page += " -webkit-user-select:none;";
page += " -moz-user-select:none;";
page += " -ms-user-select:none;";
page += " user-select:none;";
page += " background-color:transparent;";
page += " border:1px solid transparent;";
page += " padding:0.375rem 0.75rem;";
page += " font-size:1rem;";
page += " line-height:1.5;";
page += " border-radius:0.25rem;";
page += " -webkit-transition:color 0.15s ease-in-out, background-color 0.15s ease-in-out, border-color 0.15s ease-in-out, -webkit-box-shadow 0.15s ease-in-out;";
page += " transition:color 0.15s ease-in-out, background-color 0.15s ease-in-out, border-color 0.15s ease-in-out, -webkit-box-shadow 0.15s ease-in-out;";
page += " transition:color 0.15s ease-in-out, background-color 0.15s ease-in-out, border-color 0.15s ease-in-out, box-shadow 0.15s ease-in-out;";
page += " transition:color 0.15s ease-in-out, background-color 0.15s ease-in-out, border-color 0.15s ease-in-out, box-shadow 0.15s ease-in-out, -webkit-box-shadow 0.15s ease-in-out";
page += "}";
page += "@media (prefers-reduced-motion: reduce) {";
page += " .btn {";
page += "  -webkit-transition:none;";
page += "  transition:none";
page += " }";
page += "}";
page += ".btn:hover {";
page += " color:#777;";
page += " text-decoration:none";
page += "}";
page += ".btn:focus {";
page += " outline:0;";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(68,110,155,0.25);";
page += " box-shadow:0 0 0 0.2rem rgba(68,110,155,0.25)";
page += "}";
page += ".btn:disabled {";
page += " opacity:0.65";
page += "}";
page += ".btn-primary {";
page += " color:#fff;";
page += " background-color:#446E9B;";
page += " border-color:#446E9B";
page += "}";
page += ".btn-primary:hover {";
page += " color:#fff;";
page += " background-color:#385b80;";
page += " border-color:#345578";
page += "}";
page += ".btn-primary:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(96,132,170,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(96,132,170,0.5)";
page += "}";
page += ".btn-primary:disabled {";
page += " color:#fff;";
page += " background-color:#446E9B;";
page += " border-color:#446E9B";
page += "}";
page += ".btn-primary:not(:disabled):not(.disabled):active,.btn-primary:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#345578;";
page += " border-color:#314f6f";
page += "}";
page += ".btn-primary:not(:disabled):not(.disabled):active:focus,.btn-primary:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(96,132,170,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(96,132,170,0.5)";
page += "}";
page += ".btn-secondary:not(:disabled):not(.disabled):active,.btn-secondary:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#807f7f;";
page += " border-color:#797979";
page += "}";
page += ".btn-secondary:not(:disabled):not(.disabled):active:focus,.btn-secondary:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(168,168,168,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(168,168,168,0.5)";
page += "}";
page += ".btn-success:not(:disabled):not(.disabled):active,.btn-success:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#2e8a19;";
page += " border-color:#2a7f17";
page += "}";
page += ".btn-success:not(:disabled):not(.disabled):active:focus,.btn-success:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(89,192,66,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(89,192,66,0.5)";
page += "}";
page += ".btn-info:not(:disabled):not(.disabled):active,.btn-info:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#0e80e6;";
page += " border-color:#0d7ad9";
page += "}";
page += ".btn-info:not(:disabled):not(.disabled):active:focus,.btn-info:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(82,168,245,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(82,168,245,0.5)";
page += "}";
page += ".btn-warning {";
page += " color:#fff;";
page += " background-color:#D47500;";
page += " border-color:#D47500";
page += "}";
page += ".btn-warning:hover {";
page += " color:#fff;";
page += " background-color:#ae6000;";
page += " border-color:#a15900";
page += "}";
page += ".btn-warning:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(218,138,38,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(218,138,38,0.5)";
page += "}";
page += ".btn-warning:disabled {";
page += " color:#fff;";
page += " background-color:#D47500;";
page += " border-color:#D47500";
page += "}";
page += ".btn-warning:not(:disabled):not(.disabled):active,.btn-warning:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#a15900;";
page += " border-color:#945200";
page += "}";
page += ".btn-warning:not(:disabled):not(.disabled):active:focus,.btn-warning:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(218,138,38,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(218,138,38,0.5)";
page += "}";
page += ".btn-danger:not(:disabled):not(.disabled):active,.btn-danger:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#9a0200;";
page += " border-color:#8d0100";
page += "}";
page += ".btn-danger:not(:disabled):not(.disabled):active:focus,.btn-danger:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(213,40,38,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(213,40,38,0.5)";
page += "}";
page += ".btn-light:not(:disabled):not(.disabled):active,.btn-light:not(:disabled):not(.disabled).active {";
page += " color:#2d2d2d;";
page += " background-color:#d5d4d4;";
page += " border-color:#cecece";
page += "}";
page += ".btn-light:not(:disabled):not(.disabled):active:focus,.btn-light:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(209,209,209,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(209,209,209,0.5)";
page += "}";
page += ".btn-dark:not(:disabled):not(.disabled):active,.btn-dark:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#1a1919;";
page += " border-color:#131313";
page += "}";
page += ".btn-dark:not(:disabled):not(.disabled):active:focus,.btn-dark:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(82,82,82,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(82,82,82,0.5)";
page += "}";
page += ".btn-outline-primary:not(:disabled):not(.disabled):active,.btn-outline-primary:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#446E9B;";
page += " border-color:#446E9B";
page += "}";
page += ".btn-outline-primary:not(:disabled):not(.disabled):active:focus,.btn-outline-primary:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(68,110,155,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(68,110,155,0.5)";
page += "}";
page += ".btn-outline-secondary:not(:disabled):not(.disabled):active,.btn-outline-secondary:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#999;";
page += " border-color:#999";
page += "}";
page += ".btn-outline-secondary:not(:disabled):not(.disabled):active:focus,.btn-outline-secondary:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(153,153,153,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(153,153,153,0.5)";
page += "}";
page += ".btn-outline-success:not(:disabled):not(.disabled):active,.btn-outline-success:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#3CB521;";
page += " border-color:#3CB521";
page += "}";
page += ".btn-outline-success:not(:disabled):not(.disabled):active:focus,.btn-outline-success:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(60,181,33,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(60,181,33,0.5)";
page += "}";
page += ".btn-outline-info:not(:disabled):not(.disabled):active,.btn-outline-info:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#3399F3;";
page += " border-color:#3399F3";
page += "}";
page += ".btn-outline-info:not(:disabled):not(.disabled):active:focus,.btn-outline-info:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(51,153,243,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(51,153,243,0.5)";
page += "}";
page += ".btn-outline-warning:not(:disabled):not(.disabled):active,.btn-outline-warning:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#D47500;";
page += " border-color:#D47500";
page += "}";
page += ".btn-outline-warning:not(:disabled):not(.disabled):active:focus,.btn-outline-warning:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(212,117,0,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(212,117,0,0.5)";
page += "}";
page += ".btn-outline-danger:not(:disabled):not(.disabled):active,.btn-outline-danger:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#CD0200;";
page += " border-color:#CD0200";
page += "}";
page += ".btn-outline-danger:not(:disabled):not(.disabled):active:focus,.btn-outline-danger:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(205,2,0,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(205,2,0,0.5)";
page += "}";
page += ".btn-outline-light:not(:disabled):not(.disabled):active,.btn-outline-light:not(:disabled):not(.disabled).active {";
page += " color:#2d2d2d;";
page += " background-color:#eee;";
page += " border-color:#eee";
page += "}";
page += ".btn-outline-light:not(:disabled):not(.disabled):active:focus,.btn-outline-light:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(238,238,238,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(238,238,238,0.5)";
page += "}";
page += ".btn-outline-dark:not(:disabled):not(.disabled):active,.btn-outline-dark:not(:disabled):not(.disabled).active {";
page += " color:#fff;";
page += " background-color:#333;";
page += " border-color:#333";
page += "}";
page += ".btn-outline-dark:not(:disabled):not(.disabled):active:focus,.btn-outline-dark:not(:disabled):not(.disabled).active:focus {";
page += " -webkit-box-shadow:0 0 0 0.2rem rgba(51,51,51,0.5);";
page += " box-shadow:0 0 0 0.2rem rgba(51,51,51,0.5)";
page += "}";
page += ".btn-lg {";
page += " padding:0.5rem 1rem;";
page += " font-size:1.25rem;";
page += " line-height:1.5;";
page += " border-radius:0.3rem";
page += "}";
page += ".btn-group,.btn-group-vertical {";
page += " position:relative;";
page += " display:-webkit-inline-box;";
page += " display:-ms-inline-flexbox;";
page += " display:inline-flex;";
page += " vertical-align:middle";
page += "}";
page += ".btn-group>.btn,.btn-group-vertical>.btn {";
page += " position:relative;";
page += " -webkit-box-flex:1;";
page += " -ms-flex:1 1 auto;";
page += " flex:1 1 auto";
page += "}";
page += ".btn-group>.btn:hover,.btn-group-vertical>.btn:hover {";
page += " z-index:1";
page += "}";
page += ".btn-group>.btn:focus,.btn-group>.btn:active,.btn-group-vertical>.btn:focus,.btn-group-vertical>.btn:active {";
page += " z-index:1";
page += "}";
page += ".btn-group>.btn:not(:first-child) {";
page += " margin-left:-1px";
page += "}";
page += ".btn-group>.btn:not(:last-child):not(.dropdown-toggle) {";
page += " border-top-right-radius:0;";
page += " border-bottom-right-radius:0";
page += "}";
page += ".btn-group>.btn:not(:first-child) {";
page += " border-top-left-radius:0;";
page += " border-bottom-left-radius:0";
page += "}";
page += ".btn-group-vertical {";
page += " -webkit-box-orient:vertical;";
page += " -webkit-box-direction:normal;";
page += " -ms-flex-direction:column;";
page += " flex-direction:column;";
page += " -webkit-box-align:start;";
page += " -ms-flex-align:start;";
page += " align-items:flex-start;";
page += " -webkit-box-pack:center;";
page += " -ms-flex-pack:center;";
page += " justify-content:center";
page += "}";
page += ".btn-group-vertical>.btn {";
page += " width:100%";
page += "}";
page += ".btn-group-vertical>.btn:not(:first-child) {";
page += " margin-top:-1px";
page += "}";
page += ".btn-group-vertical>.btn:not(:last-child):not(.dropdown-toggle) {";
page += " border-bottom-right-radius:0;";
page += " border-bottom-left-radius:0";
page += "}";
page += ".btn-group-vertical>.btn:not(:first-child) {";
page += " border-top-left-radius:0;";
page += " border-top-right-radius:0";
page += "}";
page += ".close:not(:disabled):not(.disabled):hover,.close:not(:disabled):not(.disabled):focus {";
page += " opacity:.75";
page += "}";
page += "@supports (position: -webkit-sticky) or (position: sticky) {";
page += "}";
page += ".mb-0 {";
page += " margin-bottom:0 !important";
page += "}";
page += ".py-5 {";
page += " padding-top:3rem !important";
page += "}";
page += ".py-5 {";
page += " padding-bottom:3rem !important";
page += "}";
page += ".text-muted {";
page += " color:#777 !important";
page += "}";
page += "@media print {";
page += " *,*::before,*::after {";
page += "  text-shadow:none !important;";
page += "  -webkit-box-shadow:none !important;";
page += "  box-shadow:none !important";
page += " }";
page += " tr {";
page += "  page-break-inside:avoid";
page += " }";
page += " p {";
page += "  orphans:3;";
page += "  widows:3";
page += " }";
page += " @page {";
page += "  size:a3";
page += " }";
page += " body {";
page += "  min-width:992px !important";
page += " }";
page += " .container {";
page += "  min-width:992px !important";
page += " }";
page += "}";
page += ".btn {";
page += " text-shadow:-1px -1px 0 rgba(0,0,0,0.1)";
page += "}";
page += ".btn-primary {";
page += " background-image:-webkit-gradient(linear, left top, left bottom, from(#6d94bf), color-stop(50%, #446E9B), to(#3e648d));";
page += " background-image:linear-gradient(#6d94bf, #446E9B 50%, #3e648d);";
page += " background-repeat:no-repeat;";
page += " -webkit-filter:none;";
page += " filter:none;";
page += " border:1px solid #345578";
page += "}";
page += ".btn-primary:not(.disabled):hover {";
page += " background-image:-webkit-gradient(linear, left top, left bottom, from(#5f8ab9), color-stop(50%, #3e648d), to(#385a7f));";
page += " background-image:linear-gradient(#5f8ab9, #3e648d 50%, #385a7f);";
page += " background-repeat:no-repeat;";
page += " -webkit-filter:none;";
page += " filter:none;";
page += " border:1px solid #2e4b69";
page += "}";
page += ".btn-warning {";
page += " background-image:-webkit-gradient(linear, left top, left bottom, from(#ff9c22), color-stop(50%, #D47500), to(#c06a00));";
page += " background-image:linear-gradient(#ff9c22, #D47500 50%, #c06a00);";
page += " background-repeat:no-repeat;";
page += " -webkit-filter:none;";
page += " filter:none;";
page += " border:1px solid #a15900";
page += "}";
page += ".btn-warning:not(.disabled):hover {";
page += " background-image:-webkit-gradient(linear, left top, left bottom, from(#ff930d), color-stop(50%, #c06a00), to(#ab5e00));";
page += " background-image:linear-gradient(#ff930d, #c06a00 50%, #ab5e00);";
page += " background-repeat:no-repeat;";
page += " -webkit-filter:none;";
page += " filter:none;";
page += " border:1px solid #8d4e00";
page += "}";




page += "";
page += "</style>";
page += "<body class=''>";
page += "  <div class='py-5 bg-gradient'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <h1 class='display-3'>TonUINO</h1>";
page += "        </div>";
page += "    </div>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b>Contr&#244;le</b>";
page += "            </p>";
page += "          </div>";
page += "        </div>";
page += "      </div>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='btn-group'>";
page += "            <a href='play' class='btn btn-primary btn-lg myBlueButton'>Play</a>";
page += "            <a href='pause' class='btn btn-primary btn-lg myBlueButton'>Pause</a>";
page += "          </div><br><br>";
page += "          <div class='btn-group'>";
page += "            <a href='prev' class='btn btn-primary btn-lg'>&lt;&lt; Prev</a>";
page += "            <a href='next' class='btn btn-primary btn-lg'>Next &gt;&gt;</a>";
page += "          </div><br><br>";
page += "          <div class='btn-group'>";
page += "            <a href='vol-' class='btn btn-primary btn-lg'>Vol -</a>";
page += "            <a href='vol+' class='btn btn-primary btn-lg'>Vol +</a>";
page += "          </div><br><br>";
page += "  <form action='/'>  ";
page += " <div class='''slidecontainer'>";
page += " <p> Volume courant : <span id='aktValue'></span></p>";
page += " <input type='range' min='0' max='30' value='10' name='akt_volume' class='slider' id='myAktVolRange'>";
page += " <p> Volume maximum : <span id='maxValue'></span></p>";
page += " <input type='range' min='0' max='30' value='10' name='max_volume' class='slider' id='myMaxVolRange'>";
page += " <br><br>";
page += " <input type='submit' value='Appliquer' class='btn btn-warning btn-lg'>";
page += " </div>";
page += "<script>";
page += "var slider = document.getElementById('myAktVolRange');";
page += "var output = document.getElementById('aktValue');";
page += "var slider2 = document.getElementById('myMaxVolRange');";
page += "var output2= document.getElementById('maxValue');";
page += "output.innerHTML = slider.value;";
page += "output2.innerHTML = slider2.value;";
page += "slider2.oninput = function() {";
page += "  output2.innerHTML = this.value;";
page += "  ";
page += "}";
page += "slider.oninput = function() {";
page += "  output.innerHTML = this.value;";
page += "  ";
page += "}";
page += "</script>";
page += " </form>";
page += " </div>";
page += "  </div>";
page += "   <div class='py-5'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b>&#201;galiseur</b>";
page += "            </p>";
page += "          </div>";
page += "        </div>";
page += "      </div>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='btn-group-vertical'>";
page += "            <a href='eq_norm' class='btn btn-primary btn-lg'>Normal</a>";
page += "            <a href='eq_pop' class='btn btn-primary btn-lg'>Pop</a>";
page += "            <a href='eq_rock' class='btn btn-primary btn-lg'>Rock</a>";
page += "            <a class='btn btn-primary btn-lg' href='eq_jazz'>Jazz</a>";
page += "            <a class='btn btn-primary btn-lg' href='eq_classic'>Classic</a>";
page += "            <a class='btn btn-primary btn-lg' href='eq_base'>Base</a>";
page += "        </div>";
page += "  </div>";
page += "  <div class='py-5'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b>Timer</b>";
page += "            </p>";
page += "          </div>";
page += "          <form>";
page += "     <form action='/'> Heure de d&#233;part:  ";
page += "       <input id='appt-time-off' type='time' name='appt-time-off'value='00:00'>";
page += "	   <input type='submit' value='Sauver' class='btn btn-warning btn-lg'>";
page += "	   <br>";
page += "       <input type='checkbox' name='cb_tmr_off' value='1' id='cb_tmr_off'>";
page += "	   <label for='scales' class=''>r&#233;p&#233;tition</label> &nbsp";
page += "	   <input type='checkbox' name='cb_SleepLight_on' value='1' id='cb_SleepLight_on'>";
page += "	   <label for='scales' class=''>seulement la lumi&#232;re</label> &nbsp";
page += "	   <input type='checkbox' name='cb_SleepLight_off' value='1' id='cb_SleepLight_off'>";
page += "	   <label for='scales' class=''>lumi&#232;re &#233;teinte</label> &nbsp";
page += "	   ";
page += "     </form>";
page += "     <br>";
page += "     <form action='/'> R&#233;gler l'heure d'allumage:  ";
page += "       <input id='appt-time-on' type='time' name='appt-time-on' value='00:00'>";
page += "	   <input type='submit' value='Sauver' class='btn btn-warning btn-lg'>";
page += "       <br>";
page += "	   <input type='checkbox' name='cb_tmr_on' value='1' id='cb_tmr_on'>";
page += "	   <label for='scales' class=''>r&#233;p&#233;tition</label> &nbsp";
page += "	   <input type='checkbox' name='cb_WakeUpLight_on' value='1' id='cb_WakeUpLight_on'>";
page += "	   <label for='scales' class=''>seulement la lumi&#232;re</label> &nbsp";
page += "	   <input type='checkbox' name='cb_WakeUpLight_off' value='1' id='cb_WakeUpLight_on'>";
page += "	   <label for='scales' class=''>lumi&#232;re &#233;teinte</label> &nbsp";
page += "		";
page += "     </form>";
page += "          </form>";
page += "  </div>";
page += "  <div class='py-5'>";
page += "    <div class='container'>";
page += "      <div class='row'>";
page += "        <div class='col-md-12'>";
page += "          <div class='blockquote'>";
page += "            <p class='mb-0'>";
page += "			<hr />";
page += "              <b>Gestion des tags RFID</b>";
page += "            </p>";
page += "          </div>";
page += "          <ol>";
page += "            <li>mode de lecture radio</li>";
page += "            <li>mode party</li>";
page += "            <li>mode livre audio</li>";
page += "            <li>mode party</li>";
page += "          </ol>";
page += "          <table style='width:100%'>";
page += "            <tbody>";
page += "             <b></b> Dernier jour lu </b>";
page += "              <tr>";
page += "                <th>ID</th>";
page += "                <th>Fichier</th>";
page += "                <th>Mode de lecture</th>";
page += "              </tr>";
page += "              <tr>";
page += "                <td>135687</td>";
page += "                <td>03</td>";
page += "                <td>4</td>";
page += "              </tr>";
page += "            </tbody>";
page += "          </table>";
page += "        </div>";
page += "        <div>";
page += "          <br> Pour changer une &#233;tiquette ici, entrez ID, dossier, mode de lecture :";
page += "          <br>";
page += "     <form action='/'> Entr&#233;e :  ";
page += "       <input type='text' name='cng-rfid-tag'> &nbsp ";
page += "       <input type='submit' value='Appliquer' class='btn btn-warning btn-lg'>";
page += "       </br>";
page += "     </form>";
page += "    <br>";
page += "    <div class='col-md-12'>";
page += "       <div class='btn-group'>";
page += "          <a href='reset_card' class='btn btn-primary btn-lg'>Reset Carte</a>";
page += "          <a href='reset_eeprom' class='btn btn-primary btn-lg'>Reset EEPROM</a>";
page += "       </div>";
page += "  </div>";
page += "    </div>";

page += getFooter();
page += "</body>";
page += "</html>";

return page;
}

String SetupPage(){
String page = "<!DOCTYPE html>";
page += "<html>";
page += "<head>";
page += "<title>TonUINO WiFi Setup</title>";
page += "<h1>WiFi Setup</h1>";    
page += "<form action='/'>";
page += "    SSID: <input type='text' name='ssid'><br>";
page += "<br>";
page += "    PW: <input type='text' name='pw'><br>";
page += "<br>";
page += "   <input type='submit' value='Submit'>";
page += " </form>";
page += "<br><br>";
page += "<form action='/restart'>";
page += "   <input type='submit' value='Neustart'>";
page += " </form>";
page += "</head>";
page += "</html>";

return page;
}
 
/*
 * Server Index Page
 */
String UpdatePage(){
String page = "<script src='https://ajax.googleapis.com/ajax/libs/jquery/3.2.1/jquery.min.js'></script>";
  page += "<form method='POST' action='#' enctype='multipart/form-data' id='upload_form'>";
  page += "<input type='file' name='upload'>";
  page += "<input type='submit' value='Update'>";
  page += "</form>";
  page += "<div id='prg'>progress: 0%</div>";
  page += "<script>";
  page += "$('form').submit(function(e){";
  page += "e.preventDefault();";
  page += "var form = $('#upload_form')[0];";
  page += "var data = new FormData(form);";
  page += " $.ajax({";
  page += "url: '/upload',";
  page += "type: 'POST',";
  page += "data: data,";
  page += "contentType: false,";
  page += "processData:false,";
  page += "xhr: function() {";
  page += "var xhr = new window.XMLHttpRequest();";
  page += "xhr.upload.addEventListener('progress', function(evt) {";
  page += "if (evt.lengthComputable) {";
  page += "var per = evt.loaded / evt.total;";
  page += "$('#prg').html('progress: ' + Math.round(per*100) + '%');";
  page += "}";
  page += "}, false);";
  page += "return xhr;";
  page += "},";
  page += "success:function(d, s) {";
  page += "console.log('success!')";
  page += "},";
  page += "error: function (a, b, c) {";
  page += "}";
  page += "});";
  page += "});";
  page += "</script>";

  return page;
}