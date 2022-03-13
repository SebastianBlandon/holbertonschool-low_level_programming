<h1 class="gap">0x01. C - Variables, if, else, while</h1>
<div id="project-description" class="well clean">
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Everything you need to know to start with C.pdf" href="https://intranet.hbtn.io/rltoken/GB1UNodFfec0AXUfmSxsLA" target="_blank" rel="noopener">Everything you need to know to start with C.pdf</a>&nbsp;(<em>You do not have to learn everything in there yet, but make sure you read it entirely first and make sure you understand the slides: &ldquo;comments&rdquo;, &ldquo;Data types | Integer types&rdquo;, &ldquo;Declaration&rdquo;, &ldquo;Characters&rdquo;, &ldquo;Arithmetic operators&rdquo;, &ldquo;Variables assignments&rdquo;, &ldquo;Comparisons&rdquo;, &ldquo;Logical operators&rdquo;, &ldquo;if, if&hellip;else&rdquo;, &ldquo;while loops&rdquo;.</em>)</li>
<li><a title="Keywords and identifiers" href="https://intranet.hbtn.io/rltoken/ckqC9BrBcMmv-DLmBauaWQ" target="_blank" rel="noopener">Keywords and identifiers</a></li>
<li><a title="integers" href="https://intranet.hbtn.io/rltoken/Oau_6LT7-3IIt5ew_3Ac6g" target="_blank" rel="noopener">integers</a></li>
<li><a title="Arithmetic Operators in C" href="https://intranet.hbtn.io/rltoken/r4hrHzg2X9JjnKj8sP_SAw" target="_blank" rel="noopener">Arithmetic Operators in C</a></li>
<li><a title="If statements in C" href="https://intranet.hbtn.io/rltoken/W93uajwXtW3WOxOaeBtF-A" target="_blank" rel="noopener">If statements in C</a></li>
<li><a title="if...else statement" href="https://intranet.hbtn.io/rltoken/PMD6eKdkj2RmIpagtABihw" target="_blank" rel="noopener">if&hellip;else statement</a></li>
<li><a title="Relational operators" href="https://intranet.hbtn.io/rltoken/dCy4644-X_WJMYxRZwCfFQ" target="_blank" rel="noopener">Relational operators</a></li>
<li><a title="Logical operators" href="https://intranet.hbtn.io/rltoken/gJzJXQoEdEN1Oxcutp_76Q" target="_blank" rel="noopener">Logical operators</a></li>
<li><a title="while loop in C" href="https://intranet.hbtn.io/rltoken/Qhq1p5UcR72-VXFJ_iAqWQ" target="_blank" rel="noopener">while loop in C</a></li>
<li><a title="While loop" href="https://intranet.hbtn.io/rltoken/RY9a1EDxRKNNHhxbJ6Pn_g" target="_blank" rel="noopener">While loop</a></li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>ascii</code>&nbsp;(<em>You do not need to learn about&nbsp;<code>scanf</code>,&nbsp;<code>getc</code>,&nbsp;<code>getchar</code>,&nbsp;<code>EOF</code>,&nbsp;<code>EXIT_SUCCESS</code>,&nbsp;<code>time</code>,&nbsp;<code>rand</code>,&nbsp;<code>srand</code>,&nbsp;<code>RAND_MAX</code>,&nbsp;<code>for</code>&nbsp;loops,&nbsp;<code>do...while</code>&nbsp;loops, functions.</em>)</li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/Wt5UkBEU7LpZ8tzq9jvpJg" target="_blank" rel="noopener">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>What are the arithmetic operators and how to use them</li>
<li>What are the logical operators (sometimes called boolean operators) and how to use them</li>
<li>What the the relational operators and how to use them</li>
<li>What values are considered TRUE and FALSE in C</li>
<li>What are the boolean operators and how to use them</li>
<li>How to use the&nbsp;<code>if</code>,&nbsp;<code>if ... else</code>&nbsp;statements</li>
<li>How to use comments</li>
<li>How to declare variables of types&nbsp;<code>char</code>,&nbsp;<code>int</code>,&nbsp;<code>unsigned int</code></li>
<li>How to assign values to variables</li>
<li>How to print the values of variables of type&nbsp;<code>char</code>,&nbsp;<code>int</code>,&nbsp;<code>unsigned int</code>&nbsp;with&nbsp;<code>printf</code></li>
<li>How to use the&nbsp;<code>while</code>&nbsp;loop</li>
<li>How to use variables with the&nbsp;<code>while</code>&nbsp;loop</li>
<li>How to print variables using&nbsp;<code>printf</code></li>
<li>What is the&nbsp;<code>ASCII</code>&nbsp;character set</li>
<li>What are the purpose of the&nbsp;<code>gcc</code>&nbsp;flags&nbsp;<code>-m32</code>&nbsp;and&nbsp;<code>-m64</code></li>
</ul>
<h2>Requirements</h2>
<h3>General</h3>
<ul>
<li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A&nbsp;<code>README.md</code>&nbsp;file, at the root of the folder of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use&nbsp;<code>system</code></li>
<li>Your code should use the&nbsp;<code>Betty</code>&nbsp;style. It will be checked using&nbsp;<a title="betty-style.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a>&nbsp;and&nbsp;<a title="betty-doc.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
</ul>
</div>
