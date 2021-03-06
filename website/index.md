##  Objective:
In the months following our SHREC 2018 - 2D Scene Image-Based 3D Scene Retrieval
**(SceneIBR2018)** track [1], we have extended the number of the scene categories from the initial
10 classes in the **SceneIBR2018** benchmark to 30 classes [2], resulting in a new benchmark
**SceneIBR2019** which has 30,000 scene images and 3,000 3D scene models. For that reason, we
seek to further evaluate the performance of existing and new 2D scene image-based 3D scene
retrieval algorithms using this extended and more comprehensive new benchmark


##  Introduction:
2D scene image-based 3D scene model retrieval is to retrieve 3D scene models given an input 2D
scene image. It has vast related applications, including highly capable autonomous vehicles like
the Renault SYMBIOZ [3] [4], multi-view 3D scene reconstruction, VR/AR scene content
generation, and consumer electronics apps, among others. However, this task is far from trivial and lacks substantial research due to the challenges involved as well as a lack of related retrieval benchmarks. Consequently, existing 3D model retrieval algorithms have been limited to focus on single object retrieval. Seeing the benefits of advances in retrieving 3D scene models based on a scene image query makes this research direction useful, promising, and interesting as well.


To promote this interesting yet challenging research, we organized a 2018 Eurographics Shape
Retrieval Contest (SHREC) track [1] titled “2D Scene Image-Based 3D Scene Retrieval”, by
building the first 2D scene image-based 3D scene retrieval benchmark **SceneIBR2018**, comprising
10,000 2D scene images and 1,000 3D scene models. All the images and models are equally
classified into 10 indoor as well as outdoor classes.


However, as can be seen, **SceneIBR2018** contains only 10 distinct scene classes, and this is one of the reasons that all the three deep learning-based participating methods have achieved excellent performance on it. Considering this, after the track we have tripled the size of **SceneIBR2018**, resulting in an extended benchmark SceneIBR2019, which has 30,000 2D scene images and 3,000 3D scene models. Similarly, all the 2D images and 3D scene models are equally classified into 30 classes. We have kept the same set of 2D scene images and 3D scene models belonging to the initial 10 classes of **SceneIBR2018**. Hence, this track seeks participants who will provide new contributions to further advance 2D scene images-based 3D scene retrieval for evaluation and comparison, especially in terms of scalability to a larger number of scene categories, based on the new benchmark SceneIBR2019. Similarly, we will also provide corresponding evaluation code for computing a set of performance metrics similar to those used in the Query-by-Model retrieval technique.


##  Benchmark:
**Building process**. The first thing for the benchmark design is category selection, for which we
have referred to several of the most popular 2D/3D scene datasets, such as Places [5] and SUN [6].
The criteria for the category selection is popularity. Finally, we selected the most popular 30 scene
classes (including the initial 10 classes in **SceneIBR2018**) from the 88 available category labels in
the Places88 dataset [5], via a voting mechanism among three people (two graduate students as
voters and a faculty member as the moderator) based on their judgments. We want to mention that
the 88 common scenes are already shared by ImageNet [7], SUN [6], and Places [5]. Then, to
collect data (images and models) for the additional 20 classes, we gathered from Flicker and Google
Image for images, and downloaded SketchUp 3D scene models (originally, in “.SKP” format, but
we provide “.OBJ” format as well after transformation) from 3D Warehouse [8].
Benchmark details. Our extended 2D scene image-based 3D scene retrieval benchmark
SceneIBR2019 expands the initial 10 classes of **SceneIBR2018** with 20 new classes totaling a
more comprehensive dataset of 30 classes. SceneIBR2019 contains a complete dataset of 30,000
2D scene images (1,000 per class) and 3,000 3D scene models (100 per class). Examples for each
class are demonstrated in both **Fig. 1** and **Fig. 2**.
In the same manner as the **SceneIBR2018** track, we randomly pull 700 images and 70 models out
from each class for training and the remaining 300 images and 30 models are used for testing, as shown in **Table 1**. If a method involves a learning-based approach, results for both the training and
testing datasets need to be submitted. Otherwise, retrieval results based on the complete datasets
are needed. 

**<p style="text-align: center;"> Table 1. Training and testing datasets information of our SceneIBR2019  benchmark.<p style="text-align: center;">**

<p align="center">
 <img src= "https://i.imgur.com/8ov980f.png">
</p>

**2D Scene Image Dataset.** The 2D scene image query set is composed of 30,000 scene images (30
classes, each with 1,000 images) that are all from the Flicker and Google Image websites. One
example per class is demonstrated in **Fig. 1.**


<p align="center">
 <img src= "https://i.imgur.com/qFMCsJO.png">
</p>


**<p style="text-align: center;"> Fig. 1 Example 2D scene images (one example per class) in our SceneIBR2019 benchmark.</p>**


**3D Scene Dataset.** The 3D scene dataset is built on the selected 3,000 3D scene models
downloaded from 3D Warehouse. Each class has 100 3D scene models. One example per class is
shown in **Fig. 2.**

<p align="center">
 <img src="https://imgur.com/rdtSti8.png">
</p>

**<p style="text-align: center;">Fig. 2 Example 3D scene models (one example per class, shown in one view) in our SceneIBR2019 benchmark.</p>**

# Evaluation Method:
To have a comprehensive evaluation of the retrieval algorithm, we employ seven commonly
adopted performance metrics in 3D model retrieval community: Precision-Recall (PR) diagram,
Nearest Neighbor (NN), First Tier (FT), Second Tier (ST), E-Measures (E), Discounted Cumulated
Gain (DCG) and Average Precision (AP) [9]. We have developed the related code to compute these
metrics and will provide them to participants.

# The Procedural Aspects:
The complete dataset will be made available on the **25<sup>th</sup> of January** and the results will be due in
six weeks after that. Every participant is expected to perform the queries and send us their retrieval
results. We will then do the performance assessment. Participants and organizers will collaborate
to write a joint SHREC track competition report to detail the results and evaluations. Results of the
track will be presented by one of our organizers during the 2019 Eurographics 3DOR workshop in
Genova, Italy.

Preliminary Timeline:
January 23 - Call for participation.

**January 25** -Distribution of the database. Participants can start the retrieval or train their algorithms.

**February 8** - Please register before this date.

**March 8** - Submission of the results on the test (for learning-based methods) or the complete (for non-learning based approaches) datasets and one-page description of their method(s).

March 11 - Distribution of relevance judgments and evaluation scores.

March 13 - Track is finished and results are ready for inclusion in a track report.

March 15 - Submit the track report for review.

March 25 - Reviews done, feedback and notifications given.

**April 5** - Camera-ready track paper submitted for inclusion in the proceedings.

**May 5-6** - Eurographics Workshop on 3D Object Retrieval 2019, featuring SHREC’2019.


##  Organizers: 
 [Hameed Abdul-Rashid](https://www.linkedin.com/in/thehameedabdul/), University of Southern Mississippi, USA
 
 [Juefei Yuan](https://www.linkedin.com/in/juefei-yuan-494a34176/), University of Southern Mississippi, USA
 
 [Bo Li](https://sites.google.com/site/libohomepage/homepage), University of Southern Mississippi, USA
 
 [Yijuan Lu](https://userweb.cs.txstate.edu/~yl12/), Texas State University, USA

 [Tobias Schreck](https://www.tugraz.at/institute/cgv/schreck/), Graz University of Technology, Austria



# References:
[1] Hameed Abdul-Rashid, Juefei Yuan, Bo Li, Yijuan Lu, Song Bai, Xiang Bai, Ngoc-Minh Bui, Minh N.
Do, Trong-Le Do, Anh Duc Duong, Xinwei He, Tu-Khiem Le, Wenhui Li, Anan Liu, Xiaolong Liu, KhacTuan Nguyen, Vinh-Tiep Nguyen, Weizhi Nie, Van-Tu Ninh, Yuting Su, Vinh Ton-That, Minh-Triet
Tran, Shu Xiang, Heyu Zhou, Yang Zhou, Zhichao Zhou. [SHREC’18 Track: 2D Image-Based 3D
Scene Retrieval](http://orca.st.usm.edu/~bli/SceneIBR2018/). 3DOR 2018: 37-44.

[2] Juefei Yuan, Hameed Abdul-Rashid, Bo Li, Yijuan Lu. [Sketch/Image-Based 3D Scene Retrieval:
Benchmark, Algorithm, Evaluation](https://drive.google.com/open?id=1-EvRxQf9zS805vqBM413bjCDTZonb-E3). The IEEE 2nd International Conference on Multimedia Information
Processing and Retrieval (MIPR’19). March 28-30, San Jose, CA, USA (Invited Paper), January 2019,
Accepted (PDF).

[3] Renault. **Renault SYMBOIZ Concept**. http://www.renault.co.uk/vehicles/concept-cars/symbiozconcept.html.

[4] L. T. Tips. **Driving a multi-million dollar autonomous car**.
http://www.youtube.com/watch?v=vlIJfV1u2hM\&feature=youtu.be.

[5] B. Zhou, A. Lapedriza, A. Khosla, A. Oliva, and A. Torralba. **Places: A 10 million image database for scene recognition**. IEEE Trans. Pattern Anal. Mach. Intell., 40(6):1452–1464, 2018.

[6] J. Xiao, K. A. Ehinger, J. Hays, A. Torralba, and A. Oliva. **SUN database: Large-scale scene recognition from abbey to zoo**. In CVPR, pages 3485–3492. IEEE Computer Society, 2010.

[7] J. Deng, W. Dong, R. Socher, L. Li, K. Li, and F. Li. **ImageNet: A large-scale hierarchical image database**. CVPR 2009: 248-255.

[8] 3D Warehouse. https://3dwarehouse.sketchup.com/?hl=en.

[9] Bo Li, Yijuan Lu, Chunyuan Li, Afzal Godil, Tobias Schreck, Masaki Aono, Martin Burtscher, Qiang
Chen, Nihad Karim Chowdhury, Bin Fang, Hongbo Fu, Takahiko Furuya, Haisheng Li, Jianzhuang Liu,
Henry Johan, Ryuichi Kosaka, Hitoshi Koyanagi, Ryutarou Ohbuchi, Atsushi Tatsuma, Yajuan Wan,
Chaoli Zhang, Changqing Zou. **A comparison of 3D shape retrieval methods based on a large-scale benchmark supporting multimodal queries**. Computer Vision and Image Understanding, 131:127, 2015. 