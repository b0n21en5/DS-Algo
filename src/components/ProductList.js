import React from "react";
import Product from "./Product.js";

export default function ProductList(props) {
  return props.productList.map((product, i) => {
    return (
      <Product
        product={product}
        key={i}
        index={i}
        incrementQty={props.incrementQty}
        decrementQty={props.decrementQty}
        removeItem={props.removeItem}
      />
    );
  });
}
