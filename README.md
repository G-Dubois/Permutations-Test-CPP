This code is testing a proof-of-concept for Joshua L. Phillips' Working Memory Toolkit (WMtk) with Holographic Reduced Representations. 

When calculating the value of working memory contents, it is important to differentiate between internal representations and external representations. We differentiate by permuting the vectors for the internal representations. This is easy. The interesting part is converting the permuted vector back to its original order - a process that is required for us to be able to preserve the original representation. 

The code in this repository is a proof of concept that shows that this decoding is possible using the same permutation vector for both encoding and decoding.
