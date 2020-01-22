# tree-sitter-4dxml
4D language support in Atom

A simple, generic XML parser, based on [tree-sitter-html](https://github.com/tree-sitter/tree-sitter-html).

#### About

No integrity checking of element names or void tags vs self closing tags. ``tag.h``

* In 4D, the ``general`` tag can be void (preferences) or self closing (backup settings) depending on the DTD. 

* In 4D, the ``base`` tag is self closing, although it is void in HTML. 

``.`` and ``_`` characters are allowed in element names. ``scanner.cc``

* In 4D, ``com.4d`` or ``primary_key`` is a valid element name.

No special processing for ``script`` or ``style`` tags. ``scanner.cc``

No injection of ``javascript`` or ``css``. 

Implicit end tags are still allowed as in the original parser (not strict XML validation).
