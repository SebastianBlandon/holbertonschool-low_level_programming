<h1 class="gap">0x00. C - Hello, World</h1>
<h2>Resources</h2>
<p><strong>Read or watch</strong>:</p>
<ul>
<li><a title="Everything you need to know to start with C.pdf" href="https://intranet.hbtn.io/rltoken/d6TBbj0HA4EvnmpqvEz68Q" target="_blank" rel="noopener">Everything you need to know to start with C.pdf</a>&nbsp;(<em>You do not have to learn everything in there yet, but make sure you read it entirely first</em>)</li>
<li><a title="Dennis Ritchie" href="https://intranet.hbtn.io/rltoken/vY9KI1Ai38BUuydEfadtaA" target="_blank" rel="noopener">Dennis Ritchie</a></li>
<li><a title="&quot;C&quot; Programming Language: Brian Kernighan" href="https://intranet.hbtn.io/rltoken/f5nVwIVoNRrnddbX-5h5rw" target="_blank" rel="noopener">&ldquo;C&rdquo; Programming Language: Brian Kernighan</a></li>
<li><a title="Why C Programming Is Awesome" href="https://intranet.hbtn.io/rltoken/J7yAaPGVuPoJI4iP1DuIPw" target="_blank" rel="noopener">Why C Programming Is Awesome</a></li>
<li><a title="Learning to program in C part 1" href="https://intranet.hbtn.io/rltoken/AicyjqLinWdA9qxKsXBKjg" target="_blank" rel="noopener">Learning to program in C part 1</a></li>
<li><a title="Learning to program in C part 2" href="https://intranet.hbtn.io/rltoken/1qtDStnOrOjrVseFa3jngA" target="_blank" rel="noopener">Learning to program in C part 2</a></li>
<li><a title="Understanding C program Compilation Process" href="https://intranet.hbtn.io/rltoken/qM-SOqtf8ZnGxVtVWchAfg" target="_blank" rel="noopener">Understanding C program Compilation Process</a></li>
<li><a title="Betty Coding Style" href="https://intranet.hbtn.io/rltoken/8c-wkUvvmuA_d5s4ktmnEw" target="_blank" rel="noopener">Betty Coding Style</a></li>
<li><a title="Hash-bang under the hood" href="https://intranet.hbtn.io/rltoken/7oODGrfLgAJJzoCbfBap3Q" target="_blank" rel="noopener">Hash-bang under the hood</a>&nbsp;(<em>Look at only after you finish consuming the other resources</em>)</li>
<li><a title="Linus Torvalds on C vs. C++" href="https://intranet.hbtn.io/rltoken/8rYFkn82I0QlSygvC0u2Jw" target="_blank" rel="noopener">Linus Torvalds on C vs. C++</a>&nbsp;(<em>Look at only after you finish consuming the other resources</em>)</li>
</ul>
<p><strong>man or help</strong>:</p>
<ul>
<li><code>gcc</code></li>
<li><code>printf (3)</code></li>
<li><code>puts</code></li>
<li><code>putchar</code></li>
</ul>
<h2>Learning Objectives</h2>
<p>At the end of this project, you are expected to be able to&nbsp;<a title="explain to anyone" href="https://intranet.hbtn.io/rltoken/IU8pPF3LtFsVkcyn4BUITA" target="_blank" rel="noopener">explain to anyone</a>,&nbsp;<strong>without the help of Google</strong>:</p>
<h3>General</h3>
<ul>
<li>Why C programming is awesome</li>
<li>Who invented C</li>
<li>Who are Dennis Ritchie, Brian Kernighan and Linus Torvalds</li>
<li>What happens when you type&nbsp;<code>gcc main.c</code></li>
<li>What is an entry point</li>
<li>What is&nbsp;<code>main</code></li>
<li>How to print text using&nbsp;<code>printf</code>,&nbsp;<code>puts</code>&nbsp;and&nbsp;<code>putchar</code></li>
<li>How to get the size of a specific type using the unary operator&nbsp;<code>sizeof</code></li>
<li>How to compile using&nbsp;<code>gcc</code></li>
<li>What is the default program name when compiling with&nbsp;<code>gcc</code></li>
<li>What is the official C coding style and how to check your code with&nbsp;<code>betty-style</code></li>
<li>How to find the right header to include in your source code when using a standard library function</li>
<li>How does the&nbsp;<code>main</code>&nbsp;function influence the return value of the program</li>
</ul>
<h2>Requirements</h2>
<h3>C</h3>
<ul>
<li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
<li>All your files will be compiled on Ubuntu 20.04 LTS using&nbsp;<code>gcc</code>, using the options&nbsp;<code>-Wall -Werror -Wextra -pedantic -std=gnu89</code></li>
<li>All your files should end with a new line</li>
<li>A&nbsp;<code>README.md</code>&nbsp;file at the root of the repo, containing a description of the repository</li>
<li>A&nbsp;<code>README.md</code>&nbsp;file, at the root of the folder of&nbsp;<em>this</em>&nbsp;project, containing a description of the project</li>
<li>There should be no errors and no warnings during compilation</li>
<li>You are not allowed to use&nbsp;<code>system</code></li>
<li>Your code should use the&nbsp;<code>Betty</code>&nbsp;style. It will be checked using&nbsp;<a title="betty-style.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-style.pl" target="_blank" rel="noopener">betty-style.pl</a>&nbsp;and&nbsp;<a title="betty-doc.pl" href="https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl" target="_blank" rel="noopener">betty-doc.pl</a></li>
</ul>
<h3>Shell Scripts</h3>
<ul>
<li>Allowed editors:&nbsp;<code>vi</code>,&nbsp;<code>vim</code>,&nbsp;<code>emacs</code></li>
<li>All your scripts will be tested on Ubuntu 20.04 LTS</li>
<li>All your scripts should be exactly two lines long (<code>$ wc -l file</code>&nbsp;should print 2)</li>
<li>All your files should end with a new line</li>
<li>The first line of all your files should be exactly&nbsp;<code>#!/bin/bash</code></li>
</ul>
<h2>More Info</h2>
<h3>Betty linter</h3>
<p>To run the Betty linter just with command&nbsp;<code>betty &lt;filename&gt;</code>:</p>
<ul>
<li>Go to the&nbsp;<a title="Betty" href="https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ" target="_blank" rel="noopener">Betty</a>&nbsp;repository</li>
<li>Clone the&nbsp;<a title="repo" href="https://intranet.hbtn.io/rltoken/Iz34GJJ6iQ28q3sJXRUdkQ" target="_blank" rel="noopener">repo</a>&nbsp;to your local machine</li>
<li><code>cd</code>&nbsp;into the Betty directory</li>
<li>Install the linter with&nbsp;<code>sudo ./install.sh</code></li>
<li><code>emacs</code>&nbsp;or&nbsp;<code>vi</code>&nbsp;a new file called&nbsp;<code>betty</code>, and copy the script below:</li>
</ul>
<pre><code>#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
</code></pre>
<ul>
<li>Once saved, exit file and change permissions to apply to all users with&nbsp;<code>chmod a+x betty</code></li>
<li>Move the&nbsp;<code>betty</code>&nbsp;file into&nbsp;<code>/bin/</code>&nbsp;directory or somewhere else in your&nbsp;<code>$PATH</code>&nbsp;with&nbsp;<code>sudo mv betty /bin/</code></li>
</ul>
<p>You can now type&nbsp;<code>betty &lt;filename&gt;</code>&nbsp;to run the Betty linter!</p>
