% ---------------------------------------------------------------------
% EG author guidelines plus sample file for EG publication using LaTeX2e input
% D.Fellner, v2.02, Jan 25, 2017


\title[SHREC'19 Track: Extended 2D Scene Sketch-Based 3D Scene Retrieval]
      {SHREC'19 Track: Extended 2D Scene Sketch-Based 3D Scene Retrieval}

% for anonymous conference submission please enter your SUBMISSION ID
% instead of the author's name (and leave the affiliation blank) !!
% for final version: please provide your *own* ORCID in the brackets following \orcid; see https://orcid.org/ for more details.
\author[J. Yuan et al]
       {
			  \begin{minipage}[b]{0.95\linewidth} % A minipage that covers half the page
        \centering
             Juefei Yuan\thanks{Track organizers. *Corresponding author. For any question related to the track, please contact Bo Li. E-mail: bo.li@usm.edu.}$^{1}$,
							Bo Li\footnotemark[1*]$^{1}$,
							Hameed Abdul-Rashid\footnotemark[1*]$^{1}$,
							Yijuan Lu\footnotemark[1]$^{2}$,
                Song Bai\thanks{Track participants.}$^{3}$,
							Xiang Bai\footnotemark[2]$^{3}$,
							Ngoc-Minh Bui\footnotemark[2]$^{4}$,
							Minh N. Do\footnotemark[2]$^{5}$,
							Trong-Le Do\footnotemark[2]$^{4}$,
							Anh-Duc Duong\footnotemark[2]$^{6}$,
							Xinwei He\footnotemark[2]$^{3}$,
							Tu-Khiem Le\footnotemark[2]$^{4}$,
							Wenhui Li\footnotemark[2]$^{7}$,
							Anan Liu\footnotemark[2]$^{7}$,
							Xiaolong Liu\footnotemark[2]$^{3}$,
							Khac-Tuan Nguyen\footnotemark[2]$^{4}$,
							Vinh-Tiep Nguyen\footnotemark[2]$^{6}$,
							Weizhi Nie\footnotemark[2]$^{7}$,
							Van-Tu Ninh\footnotemark[2]$^{4}$,
							Yuting Su\footnotemark[2]$^{7}$,
							Vinh Ton-That\footnotemark[2]$^{4}$,
							Minh-Triet Tran\footnotemark[2]$^{4}$,
							Shu Xiang\footnotemark[2]$^{7}$,
							Heyu Zhou\footnotemark[2]$^{7}$,
							Yang Zhou\footnotemark[2]$^{3}$,
							Zhichao Zhou\footnotemark[2]$^{3}$
       \end{minipage}
        \\
                 $^{1}$ School of Computing, University of Southern Mississippi, USA\\
                 $^{2}$ Department of Computer Science, Texas State University, San Marcos, USA\\								
								 $^{3}$ \small School of Electronic Information and Communications, Huazhong University of Science and Technology, China\\
								 $^{4}$ \small University of Science, Vietnam National University, Vietnam $^{5}$ \small University of Illinois at Urbana-Champaign, USA\\
								 $^{6}$ \small University of Information Technology, Vietnam National University, Vietnam\\
								 $^{7}$ \small School of Electrical and Information Engineering, Tianjin University, China\\
				}
% ------------------------------------------------------------------------

% if the Editors-in-Chief have given you the data, you may uncomment
% the following five lines and insert it here
%
% \volume{36}   % the volume in which the issue will be published;
% \issue{1}     % the issue number of the publication
% \pStartPage{1}      % set starting page


%-------------------------------------------------------------------------
\begin{document}

% uncomment for using teaser
% \teaser{
%  \includegraphics[width=\linewidth]{eg_new}
%  \centering
%   \caption{New EG Logo}
% \label{fig:teaser}
%}

\maketitle
%-------------------------------------------------------------------------
\begin{abstract}
   Sketch-based 3D scene retrieval is to retrieve man-made 3D scene models given a user's hand-drawn 2D scene sketch. It is a brand new but also very challenging
research topic in the field of 3D object retrieval due to the semantic gap in their representations: 3D scene models or views differ from non-realistic 2D scene sketches. Due to the intuitiveness in sketching, this research topic has vast applications such as 3D scene reconstruction, autonomous driving cars, 3D geometry video retrieval, and 3D AR/VR entertainment. Therefore, this research topic deserves our further exploration.
To boost this interesting and important research, we organized ~\cite{SHREC18-SceneSBR-Track} in 2018 which contains only 10 scene classes. In order to make it more comprehensively used, we extend the benchmark into 30 classes this time, and it is the currently largest and most comprehensive 2D scene sketch-based 3D scene retrieval benchmark. In this track, six groups from five countries (China, Chile,
USA, UK, and Vietnam) have registered for the track, while due to many challenges involved, only 3 groups have successfully
submitted 8 runs. The retrieval performance of submitted results has been evaluated using 7 commonly used retrieval performance
metrics. We also conduct a thorough analysis and discussion on those methods, and suggest several future research
directions to tackle this research problem. We wish this publicly available ~\cite{SHREC19-SceneSBR-Track} benchmark, comparative evaluation results
and corresponding evaluation code, will further enrich and advance the research of 2D scene sketch-based 3D scene retrieval
and its applications.

%-------------------------------------------------------------------------
%  ACM CCS 1998
%  (see http://www.acm.org/about/class/1998)
% \begin{classification} % according to http:http://www.acm.org/about/class/1998
% \CCScat{Computer Graphics}{I.3.3}{Picture/Image Generation}{Line and curve generation}
% \end{classification}
%-------------------------------------------------------------------------
%  ACM CCS 2012
   %(see http://www.acm.org/about/class/class/2012)
%The tool at \url{http://dl.acm.org/ccs.cfm} can be used to generate
% CCS codes.
%Example:
\begin{CCSXML}
<ccs2012>
<concept>
<concept_id>10010147.10010371.10010352.10010381</concept_id>
<concept_desc>Computing methodologies~Collision detection</concept_desc>
<concept_significance>300</concept_significance>
</concept>
<concept>
<concept_id>10010583.10010588.10010559</concept_id>
<concept_desc>Hardware~Sensors and actuators</concept_desc>
<concept_significance>300</concept_significance>
</concept>
<concept>
<concept_id>10010583.10010584.10010587</concept_id>
<concept_desc>Hardware~PCB design and layout</concept_desc>
<concept_significance>100</concept_significance>
</concept>
</ccs2012>
\end{CCSXML}

\ccsdesc[300]{Computing methodologies~Collision detection}
\ccsdesc[300]{Hardware~Sensors and actuators}
\ccsdesc[100]{Hardware~PCB design and layout}


\printccsdesc   
\end{abstract}  
%-------------------------------------------------------------------------
\section{Introduction}
~\label{sec:overview}
2D scene sketch-based 3D scene model retrieval is to retrieve human-made 3D scene models given a user 's hand-drawn 2D scene sketch. Due to the intuitiveness in sketching, this research topic has vast applications such as 3D scene reconstruction, 3D geometry video retrieval, and 3D AR/VR entertainment. It is a challenging research topic in the field of 3D scene model retrieval due to the semantic gap in their representations: non-realistic 2D scene sketches differ from 3D scene models or their views. 

Consequently, existing 3D model retrieval algorithms have mainly focused on single object retrieval and have not handled retrieving such 3D scene content, which involves a lot of new research questions and challenges. This situation was due to two major reasons: 1) there exists a very limited number of available 3D scene shape benchmarks, thus it is challenging to collect a large-scale 3D scene dataset; 2) a big semantic gap exists between the iconic representations of hand-drawn 2D scene sketches and the accurate 3D coordinate representations of 3D scenes. Thus, retrieving 3D scene models using 2D scene sketch queries makes this research direction meaningful, interesting and promising, but challenging as well. 

However, as can be seen, \textbf{SceneSBR2018} contains only 10 distinct scene classes, and this is one of the reasons that all the three deep learning-based participating methods have achieved excellent performance on it. Considering this, after the track we have tripled the size of \textbf{SceneSBR2018}, resulting in an extended benchmark \textbf{SceneSBR2019}, which has 750 2D scene sketches and 3,000 3D scene models. Similarly, all the 2D scene sketches and 3D scene models are equally classified into 30 classes. We have kept the same set of 2D scene sketches and 3D scene models belonging to the initial 10 classes of \textbf{SceneSBR2018}.

Hence, this track seeks participants who will provide new contributions to further advance 2D scene sketch-based 3D scene retrieval for evaluation and comparison, especially in terms of scalability to a larger number of scene categories, based on the new benchmark \textbf{SceneSBR2019}. Similarly, we will also provide corresponding evaluation code for computing a set of performance metrics similar to those used in the Query-by-Model retrieval technique.

\section{SceneSBR Benchmark}
~\label{sec:data}
\subsection{Overview}
\textbf{Building process}. The first thing for the benchmark design is category selection, for which we have referred to several of the most popular 2D/3D scene datasets, such as Places ~\cite{zhou2017places} and SUN ~\cite{Xiao:2016:SDE:2963034.2963064}. The criteria for the category selection is  \textit{popularity}. Finally, we selected the most popular 30 scene classes (including the initial 10 classes in \textbf{SceneSBR2018}) from the 88 available category labels in the Places88 dataset ~\cite{zhou2017places}, via a voting mechanism among three people (two graduate students as voters and a faculty member as the moderator) based on their judgments. We want to mention that the 88 common scenes are already shared by ImageNet ~\cite{imagenet_cvpr09}, SUN, and Places. Then, to collect data (sketches and models) for the additional 20 classes, we gathered from Flicker and Google Image for sketches, and downloaded SketchUp 3D scene models (originally, in ".SKP" format, but we provide ".OBJ" format as well after transformation) from 3D Warehouse ~\cite{3DWarehouse}.

\textbf{Benchmark Details}. Our extended 2D scene sketch-based 3D scene retrieval benchmark \textbf{SceneSBR2019} expands the initial 10 classes of \textbf{SceneSBR2018} by adding 20 new classes totaling a more comprehensive dataset of 30 classes. 500 more 2D scene sketches have been added to its 2D scene sketch dataset and 2,000 more SketchUp 3D scene models (".SKP" and ".OBJ" formats) to its 3D scene dataset. Each of the additional 20 classes has the same number of 2D scene sketches (25) and 3D scene models (100), as well. Therefore, \textbf{SceneIBR2019} contains a complete dataset of 750 2D scene sketches (25 per class) and 3,000 3D scene models (100 per class) across 30 scene categories. Examples for each class are demonstrated in both \textbf{Fig.}~\ref{SampleSketches} and \textbf{Fig.}~\ref{SampleModels}.

Similar to the SHREC'18 sketch track, we randomly select 18 sketches and 70 models from each class for training and the remaining 7 sketches and 30 models are used for testing, as shown in \textbf{Table}~\ref{table1}. Participants need to submit results on the training and testing datasets, respectively, if they use a learning-based approach. Otherwise, the retrieval results based on the complete (750 sketches, 3000 models) datasets are needed.

\subsection{2D Scene Sketch Dataset}
The 2D scene sketch dataset comprises 750 2D scene sketches (10 classes, each with 25 sketches). One example per class is demonstrated in \textbf{Fig.}~\ref{SampleSketches}. 

\subsection{3D Scene Dataset}
The 3D scene dataset is built on the selected 3,000 3D scene models downloaded from 3D Warehouse. Each class has 100 3D scene models. One example per class is shown in \textbf{Fig.}~\ref{SampleModels}.

\subsection{Evaluation Method}
\label{sec:evaluation}
The objective of this track is to evaluate the performance of different 2D scene sketch-based 3D scene retrieval algorithms using a 2D sketch query dataset and a 3D Warehouse model dataset. While, each algorithm targets retrieving 3D scene models that belong to the same class as that of each query 2D scene sketch. To have a comprehensive evaluation of the retrieval algorithm, we employ seven commonly adopted performance metrics in the 3D model retrieval community~\cite{DBLP:journals/cviu/LiLLGSABCCFFFLLJKKOTWZZ15, DBLP:journals/cviu/0013LGSBFFFJMOPS14}. They are Precision-Recall (PR) diagram, Nearest Neighbor (NN), First Tier (FT), Second Tier (ST), E-Measures (E), Discounted Cumulated Gain (DCG) and Average Precision (AP). We also have developed the code to compute them.

\section{Participants}
There were six groups who registered for the track. Two groups come from

\section{Methods}
%-------------------------------------------------------------------------

%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

\subsection{MMD-VGG: Maximum Mean Discrepancy Domain Adaptation on the VGG-Net, by W. Li, S. Xiang, H. Zhou, W. Nie, A. Liu, and Y. Su}
\label{sec:NLBS&LBS}
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%

They proposed the M

\begin{table}[h]
\centering
\caption {Training and testing datasets (per class) of our \textbf{Extended SceneSBR} benchmark.}
\begin{center}
\begin{tabular}  {|c|c|c|}
 \hline
 \textbf{\normalsize{SceneSBR}} Benchmark & Sketch & Model \\
 \hline
 \normalsize{Training}  & 18  & 70  \\
 \hline
 \normalsize{Testing}  & 7  & 30  \\
  \hline
 \normalsize{Total (per class)}  & 25  & 100  \\
\hline
\end{tabular}
\end{center}
%\caption {Training and testing datasets (per class) of our \textbf{SceneSBR} benchmark.}
\label{table1}
\end{table}

\begin{figure}[t]
\centering
{
\includegraphics[width=1.0\linewidth]{SampleSketches}
}
\caption{Example 2D scene sketches (one example per class) in our \textbf{SceneSBR2019} benchmark.}
\label{SampleSketches}
\end{figure}

\begin{figure}[!htp]
\centering
{
\includegraphics[width=1.0\linewidth]{SampleModels}
}
\caption{Example 3D scene models (one example per class, shown in one view) in our \textbf{SceneSBR2019} benchmark.}
\label{SampleModels}
\end{figure}

\section{Results}
\label{sec:Results}
In this section, we perform a


%-------------------------------------------------------------------------
\section{Conclusions and Future Work}
\label{sec:conclusions_and_futurework}
\subsection{Conclusions}
Due to the semantic gap

\subsection{Future Work}
This track not only helps u

%-------------------------------------------------------------------------
\section*{Acknowledgments}
This project is supported by the University of Southern Mississippi Faculty Startup Funds Award to Dr. Bo Li.
%-------------------------------------------------------------------------

%\bibliographystyle{eg-alpha}
\bibliographystyle{eg-alpha-doi}

\bibliography{shrec19-sbr-bib}

\end{document}
