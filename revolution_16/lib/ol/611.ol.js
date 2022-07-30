"use strict";(self.webpackChunkol=self.webpackChunkol||[]).push([[611],{165:function(t,e,n){function r(t,e){let n=t.length-e,r=0;do{for(let n=e;n>0;n--)t[r+e]+=t[r],r++;n-=e}while(n>0)}function o(t,e,n){let r=0,o=t.length;const i=o/n;for(;o>e;){for(let n=e;n>0;--n)t[r+e]+=t[r],++r;o-=e}const c=t.slice();for(let e=0;e<i;++e)for(let r=0;r<n;++r)t[n*e+r]=c[(n-r-1)*i+e]}n.d(e,{Z:function(){return i}});class i{async decode(t,e){const n=await this.decodeBlock(e),i=t.Predictor||1;if(1!==i){const e=!t.StripOffsets;return function(t,e,n,i,c,f){if(!e||1===e)return t;for(let t=0;t<c.length;++t){if(c[t]%8!=0)throw new Error("When decoding with predictor, only multiple of 8 bits are supported.");if(c[t]!==c[0])throw new Error("When decoding with predictor, all samples must have the same size.")}const s=c[0]/8,l=2===f?1:c.length;for(let f=0;f<i&&!(f*l*n*s>=t.byteLength);++f){let i;if(2===e){switch(c[0]){case 8:i=new Uint8Array(t,f*l*n*s,l*n*s);break;case 16:i=new Uint16Array(t,f*l*n*s,l*n*s/2);break;case 32:i=new Uint32Array(t,f*l*n*s,l*n*s/4);break;default:throw new Error(`Predictor 2 not allowed with ${c[0]} bits per sample.`)}r(i,l)}else 3===e&&(i=new Uint8Array(t,f*l*n*s,l*n*s),o(i,l,s))}return t}(n,i,e?t.TileWidth:t.ImageWidth,e?t.TileLength:t.RowsPerStrip||t.ImageLength,t.BitsPerSample,t.PlanarConfiguration)}return n}}},611:function(t,e,n){n.r(e),n.d(e,{default:function(){return c}});var r=n(165);function o(t,e){for(let n=e.length-1;n>=0;n--)t.push(e[n]);return t}function i(t){const e=new Uint16Array(4093),n=new Uint8Array(4093);for(let t=0;t<=257;t++)e[t]=4096,n[t]=t;let r=258,i=9,c=0;function f(){r=258,i=9}function s(t){const e=function(t,e,n){const r=e%8,o=Math.floor(e/8),i=8-r,c=e+n-8*(o+1);let f=8*(o+2)-(e+n);const s=8*(o+2)-e;if(f=Math.max(0,f),o>=t.length)return console.warn("ran off the end of the buffer before finding EOI_CODE (end on input code)"),257;let l=t[o]&2**(8-r)-1;l<<=n-i;let u=l;if(o+1<t.length){let e=t[o+1]>>>f;e<<=Math.max(0,n-s),u+=e}if(c>8&&o+2<t.length){const r=8*(o+3)-(e+n);u+=t[o+2]>>>r}return u}(t,c,i);return c+=i,e}function l(t,o){return n[r]=o,e[r]=t,r++,r-1}function u(t){const r=[];for(let o=t;4096!==o;o=e[o])r.push(n[o]);return r}const a=[];f();const d=new Uint8Array(t);let w,h=s(d);for(;257!==h;){if(256===h){for(f(),h=s(d);256===h;)h=s(d);if(257===h)break;if(h>256)throw new Error(`corrupted code at scanline ${h}`);o(a,u(h)),w=h}else if(h<r){const t=u(h);o(a,t),l(w,t[t.length-1]),w=h}else{const t=u(w);if(!t)throw new Error(`Bogus entry. Not in dictionary, ${w} / ${r}, position: ${c}`);o(a,t),a.push(t[t.length-1]),l(w,t[t.length-1]),w=h}r+1>=2**i&&(12===i?w=void 0:i++),h=s(d)}return new Uint8Array(a)}class c extends r.Z{decodeBlock(t){return i(t).buffer}}}}]);