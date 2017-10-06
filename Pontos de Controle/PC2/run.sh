#!/bin/bash

PDF_NAME="RelatorioPC1JoaoIngrid.pdf"

pdflatex relatorio.tex
bibtex relatorio.aux
pdflatex relatorio.tex
pdflatex relatorio.tex

rm -f *~ *.dvi *.ps *.backup *.aux *.log
rm -f *.lof *.lot *.bbl *.blg *.brf *.toc *.idx

mv relatorio.pdf $PDF_NAME
