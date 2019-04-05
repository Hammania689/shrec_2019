% ---------------------------------------------------------------------
%!TEX root = ../main.tex
\title[SHREC'19 Track: Extended 2D Scene Image-Based 3D Scene Retrieval]{SHREC'19 Track: Extended 2D Scene Image-Based\\ 3D Scene Retrieval}
\author[H. Abdul-Rashid et al]
{
\begin{minipage}[b]{0.69\linewidth} % A minipage that covers half the page
\centering
Hameed Abdul-Rashid\thanks{\hspace{.1cm}Track organizers}\footnotemark[2]$^{1}$,
Juefei Yuan\footnotemark[1]\footnotemark[2]$^{1}$,
Bo Li\footnotemark[1]\footnotemark[2]\footnotemark[3]$^{1}$,
Yijuan Lu\footnotemark[1]\footnotemark[2]$^{2}$,
Tobias Schreck\footnotemark[1]\footnotemark[2]$^{3}$,
Ngoc-Minh Bui\footnotemark[2]$^{4,5}$,
Trong-Le Do\footnotemark[2]$^{4,5}$,
Mike Holenderski\footnotemark[2]$^{6}$,
Dmitri Jarnikov\footnotemark[2]$^{6}$,
Khiem T. Le\footnotemark[2]$^{4}$,
Vlado Menkovski\footnotemark[2]$^{6}$,
Khac-Tuan Nguyen\footnotemark[2]$^{4}$,
Thanh-An Nguyen\footnotemark[2]$^{5}$,
Vinh-Tiep Nguyen\footnotemark[2]$^{7}$,\\
Tu V. Ninh\footnotemark[2]$^{4}$,
Perez Rey\footnotemark[2]$^{6}$,
Minh-Triet Tran\footnotemark[2]$^{4,5}$,
Tianyang Wang\footnotemark[2]$^{8}$
\end{minipage}
\\
$^{1}$ School of Computer Science and Computer Engineering, University of 
Southern Mississippi, USA\\
$^{2}$ Department of Computer Science, Texas State University, USA\\
$^{3}$ Institue of Computer Graphics and Knowledge Visualization, Graz University of Technology, Austria\\
$^{4}$ \small Faculty of Information Technology, Vietnam National University - Ho Chi Minh City, Vietnam\\
$^{5}$ \small Software Engineering Lab, Vietnam National University - Ho Chi Minh City, Vietnam\\
$^{6}$ \small Department of Mathematics and Computer Science, Eindhoven University of Technology, Netherlands\\
$^{7}$ \small University of Information Technology, Vietnam National University - Ho Chi Minh City, Vietnam\\
$^{8}$ Department of Computer Science and Information Technology, Austin Peay State University, USA\\
}
%-------------------------------------------------------------------------
\begin{document}
\maketitle
%-------------------------------------------------------------------------
\subfile{Sections/abstract}
\footnotetext{\textdaggerdbl\hspace{.1cm}Track participants}
\footnotetext{*\hspace{.1cm}Corresponding author. For any question related to 
the track, please contact Bo Li. \url{bo.li@usm.edu.} or 
\url{li.bo.ntu0@gmail.com}.}
%-------------------------------------------------------------------------
\section{Introduction}
\label{sec:Introduction}
\subfile{Sections/introduction}

%-------------------------------------------------------------------------
\section{Benchmark}
\label{sec:Benchmark}
\subfile{Sections/benchmark}
%-------------------------------------------------------------------------
\section{Participants}
\label{sec:Participants}
\subfile{Sections/participants}

%-------------------------------------------------------------------------



\section{Methods}

\subsection{RNIRAP: ResNet18-Based 2D Scene Image Recognition
with Scene Attributes and Adapting Place Classification
for 3D Models Using Adversarial Training, by N. Bui, T. Do, K. Nguyen, T. Ninh, K. Le, T. 
Nguyen, M. Tran and V. Nguyen}
\label{sec:bui}

\subfile{Sections/bui}
\subsection{CVAE: Conditional Variational Autoencoders for Image 
Based Scene Retrieval, by P. Rey, M. Holenderski, D. Jarnikov and 
V. Menkovski}
\label{sec:perez}
\subfile{Sections/perez}

\subsection{VMV-VGG: View and Majority Vote Based 3D Scene 
Retrieval Algorithm, by J. Yuan, H. Abdul-Rashid, B. Li, T. Wang, 
Y. Lu}
\label{sec:yuan}
\subfile{Sections/yuan}
%-------------------------------------------------------------------------
\section{Results}
\label{sec:Results}
\subfile{Sections/results}

%-------------------------------------------------------------------------
\section{Conclusions and Future Work}
\subfile{Sections/conclusions}
%-------------------------------------------------------------------------
\section{Acknowledgements}
\subfile{Sections/acknowlegde}
%-------------------------------------------------------------------------
\bibliographystyle{eg-alpha-doi}
\bibliography{shrec2019}
%-------------------------------------------------------------------------
\end{document}
