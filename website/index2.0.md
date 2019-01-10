<div id="wrapper">

<div id="header">![](index_files/USM.png)![](index_files/txstprimary.png)</div>

*   [Home](index.html)
*   [DataSet](data.html)
*   [Updates](updates.html)
*   [Results](results.html)
*   [Evaluation](Evaluation.html)

<div id="content">

<div class="t1">SHREC 2019 - Extended 2D Scene Sketch-Based 3D Scene Retrieval</div>

<div class="t2">Call For Participation</div>

SHREC 2019 - Extended 2D Scene Sketch-Based 3D Scene Retrieval

<div class="t2">Organizers</div>

Juefei Yuan, University of Southern Mississippi, USA  
Hameed Abdul-Rashid, University of Southern Mississippi, USA  
Bo Li, University of Southern Mississippi, USA  
Yijuan Lu, Texas State University, USA

# <a id="Objective_7"></a>Objective:

In the months following our SHREC 2018 - 2D Scene Image-Based 3D Scene  
Retrieval (IBR) track, we have extended the number of the scene categories from the initial 10  
classes to 30 classes [1]. For that reason, we seek to further evaluate the performances of new  
and novel 2D scene Image-based 3D scene model retrieval algorithms using our extended and  
comprehensive benchmark

# <a id="Introduction_15"></a>Introduction:

2D scene image-based 3D scene model retrieval is to retrieve 3D scene models given an input 2D  
scene image. This task is far from trivial, for realistic 2D scene images lack 3D geometric context  
as well as semantic information. Due to limited 3D scene benchmarks and vast ambiguity in  
dimensional semantic information between scene images and scene models, 3D model retrieval  
algorithms have consequently been limited to focus on single object retrieval. Our motivation  
behind this research are its extensive contributions to 3D scene understanding as well as  
reconstruction, Autonomous systems, 3D printing, etc.  
Deng et al. [5] collected the ImageNet database which ten years after its inception comprises over  
21,000 synsets indexed and nearly 14.2 million images. While our SHREC 2018 IBR benchmark  
incorporated only 10,000 images from ImageNet and 1000 corresponding scene models from 3D  
Warehouse both equally divided between the 10 indoor and outdoor classes, the initial benchmark  
was far from comprehensive and introduced distinct classes across both indoor and outdoor  
scenes [4].

To overcome such obstacles, we increased from 10 scene classes to 30 scene classes. Zhou et al.  
collected the Places88 composed a database of 10,624,928 scene images across 434 scene  
categories [3]. Due to class imbalance in ImageNet, we replaced all initial 10 classes as well as  
established new classes with images from Places88. As for our 3D scene models, we kept the  
initial models used in the IBR benchmark and established 20 new classes, each with 100 scene  
models selected from 3D Warehouse.

Hence, this track seeks participants who will provide new contributions and advanced 2D scene  
images-based 3D scene model retrieval methods for evaluation and comparison. Upon  
submission, we will evaluate and compare results to not only other ExtendedSceneIBR methods  
but also alongside the previously submitted IBR methods. We will provide our methods of  
evaluation, which correspond to those used in the initial IBR track.

Benchmark Overview:  
Our extended 2D scene image-based 3D scene retrieval benchmark ExtendedSceneIBR expands  
the initial 10 classes of IBR with 20 new classes totaling a comprehensive dataset of 30 classes.  
The ExtendedSceneIBR contains a complete dataset of 30,000 2D scene images (1000 per class)  
and 3,000 3D scene models (100 per class). Example for each class are demonstrated in both Fig.  
1 and Fig. 2.  
In the same manner as the IBR track, we randomly pull 700 images and 70 models from each  
class for training and the remaining 300 images and 30 models are used for testing, as shown in  
Table 1.

If a method involves a learning based approach(es), results for both the training and testing  
datasets need to be submitted. Otherwise, the retrieval results based on the test and complete  
datasets are needed. To provide future users a complete reference of our benchmark, we will  
evaluate the participating algorithms on both the testing dataset and the complete  
ExtendedSceneIBR benchmark

* * *

## <a id="Insert_figures_and_captions_here_61"></a>Insert figures and captions here

* * *

# <a id="Evaluation_Method_65"></a>Evaluation Method:

To have a comprehensive evaluation of the retrieval algorithm, we employ seven commonly  
adopted performance metrics in 3D model retrieval community: Precision-Recall (PR) diagram,  
Nearest Neighbor (NN), First Tier (FT), Second Tier (ST), E-Measures (E), Discounted  
Cumulated Gain (DCG) and Average Precision (AP) [5]. We have developed the related code to  
compute these metrics and will provide them to participants.

# <a id="The_Procedural_Aspects_73"></a>The Procedural Aspects:

The complete dataset will be made available on

# <a id="Preliminary_Timeline_76"></a>Preliminary Timeline

January 22 - Call for participation.

# <a id="References_79"></a>References:

[1] Hameed Abdul-Rashid and et al., SHREC 2018: 2D Scene Image-Based 3D Scene Retrieval,  
Eurographics Workshop on 3D Object Retrieval 2018 (3DOR 2018), 2018

[2] Jia Deng and et al. ImageNet: A large-scale hierarchical image database. CVPR 2009:  
248-255.

[3] B. Zhou and et al. Places: A 10 million image database for scene recognition. IEEE Trans.  
Pattern Anal. Mach. Intell., 40(6):1452–1464, 2018.

[4] 3D Warehouse. [https://3dwarehouse.sketchup.com/?hl=en](https://3dwarehouse.sketchup.com/?hl=en).

[5] B. Li and et al. A comparison of 3D shape retrieval methods based on a large-scale benchmark  
supporting multimodal queries. Computer Vision and Image Understanding

<div class="t2">References</div>
[1] Hameed Abdul-Rashid and et al., SHREC 2018: 2D Scene Image-Based 3D Scene Retrieval,  
Eurographics Workshop on 3D Object Retrieval 2018 (3DOR 2018), 2018

[2] Jia Deng and et al. ImageNet: A large-scale hierarchical image database. CVPR 2009:  
248-255.

[3] B. Zhou and et al. Places: A 10 million image database for scene recognition. IEEE Trans.  
Pattern Anal. Mach. Intell., 40(6):1452–1464, 2018.

[4] 3D Warehouse. [https://3dwarehouse.sketchup.com/?hl=en](https://3dwarehouse.sketchup.com/?hl=en).

[5] B. Li and et al. A comparison of 3D shape retrieval methods based on a large-scale benchmark  
supporting multimodal queries. Computer Vision and Image Understanding

<div class="t2">Please cite the paper:</div>


<div id="footer">If you have any question, please email to [Hameed Abdul](mailto:hameed.abdulrashid@usm.edu)</div>

</div>