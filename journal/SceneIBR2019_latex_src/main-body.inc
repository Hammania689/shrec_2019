% ---------------------------------------------------------------------

\title[SHREC'19 Track: Extended 2D Scene Image-Based 3D Scene Retrieval]{SHREC'19 Track: Extended 2D Scene Image-Based\\ 3D Scene Retrieval}
\author[H. Abdul-Rashid et al]
{
\begin{minipage}[b]{0.95\linewidth} % A minipage that covers half the page
\centering
Hameed Abdul-Rashid\thanks{\hspace{.1cm}Track organizers}$^{1}$,
Juefei Yuan\footnotemark[1]$^{1}$,
Bo Li\footnotemark[1]\footnotemark[3]$^{1}$,
Yijuan Lu\footnotemark[1]$^{2}$,
Tobias Schreck\footnotemark[1]$^{3}$,
Tianyang Wang\footnotemark[1]$^{4}$,
Ngoc-Minh Bui\footnotemark[2]$^{6,7}$,
Trong-Le Do\footnotemark[2]$^{6,7}$,
Mike Holenderski\footnotemark[2]$^{5}$,
Dmitri Jarnikov\footnotemark[2]$^{5}$,
Khiem T. Le\footnotemark[2]$^{6}$,
Vlado Menkovski\footnotemark[2]$^{5}$,
Khac-Tuan Nguyen\footnotemark[2]$^{6,7}$,
Thanh-An Nguyen\footnotemark[2]$^{7}$,
Vinh-Tiep Nguyen\footnotemark[2]$^{8}$,
Tu V. Ninh\footnotemark[2]$^{6}$,
Perez Rey\footnotemark[2]$^{5}$,
Minh-Triet Tran\footnotemark[2]$^{6,7}$
\end{minipage}
\\
$^{1}$ School of Computing, University of Southern Mississippi, USA\\
$^{2}$ Department of Computer Science, Texas State University, USA\\
$^{3}$ Institue of Computer Graphics and knowledge visualization, Graz University of Technology, Austria\\
$^{4}$ Department of Computer Science and Information Technology, Austin Peay State University, USA\\
$^{5}$ \small Eindhoven University of Technology, Netherlands\\
$^{6}$ \small Faculty of Information Technology, Vietnam National University - Ho Chi Minh City, Vietnam\\
$^{7}$ \small Software Engineering Lab, Vietnam National University - Ho Chi Minh City Vietnam\\
$^{8}$ \small University of Information Technology, Vietnam National University - Ho Chi Minh City, Vietnam\\
}
%-------------------------------------------------------------------------
\begin{document}
\maketitle
%-------------------------------------------------------------------------
\subfile{Sections/abstract}
\footnotetext{*\hspace{.1cm}Corresponding author}
\footnotetext{\textdaggerdbl\hspace{.1cm}Track participants.}
\footnotetext{For any question related to the track, please contact Bo Li. \newline \url{bo.li@usm.edu.}}
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
\subsection{Conditional Variational Autoencoders for Image Based Scene Retrieval}
\label{sec:perez}
\subfile{Sections/perez}

\subsection{VMV-VGG: View and Majority Vote based 3D scene retrieval algorithm}
\label{sec:yuan}
\subfile{Sections/yuan}

\subsection{RNIRAP}
\label{sec:triet}
\subfile{Sections/triet}

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
\newpage
%-------------------------------------------------------------------------
%\bibliographystyle{eg-alpha}
\bibliographystyle{eg-alpha-doi}
\bibliography{shrec2019}

%-------------------------------------------------------------------------
\end{document}
