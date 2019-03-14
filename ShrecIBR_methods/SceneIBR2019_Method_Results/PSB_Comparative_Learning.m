clear all
close all
figure
clc

HCMUS_Run_1=[     
0.050000        0.825416
0.100000        0.719503
0.150000        0.699092
0.200000        0.675308
0.250000        0.677628
0.300000        0.682808
0.350000        0.690042
0.400000        0.667798
0.450000        0.655734
0.500000        0.623407
0.550000        0.606667
0.600000        0.572570
0.650000        0.559440
0.700000        0.513640
0.750000        0.472037
0.800000        0.413794
0.850000        0.341097
0.900000        0.256905
0.950000        0.173059
1.000000        0.045913
];
M_HCMUS_Run_1=mean(HCMUS_Run_1(:,2))    
hHCMUS_Run_1=plot(HCMUS_Run_1(:,1),HCMUS_Run_1(:,2),'b:o', 'LineWidth',2,'MarkerSize',8, 'MarkerFaceColor','b');%axis square,'View Context')
hold on,

HCMUS_Run_2=[
0.050000        0.859216
0.100000        0.802431
0.150000        0.794737
0.200000        0.791488
0.250000        0.788932
0.300000        0.794304
0.350000        0.795085
0.400000        0.791779
0.450000        0.797641
0.500000        0.794907
0.550000        0.786304
0.600000        0.771459
0.650000        0.732571
0.700000        0.693644
0.750000        0.659768
0.800000        0.626586
0.850000        0.600271
0.900000        0.578238
0.950000        0.567501
1.000000        0.414191

];
MHCMUS_Run_2=mean(HCMUS_Run_2(:,2))      
hHCMUS_Run_2=plot(HCMUS_Run_2(:,1),HCMUS_Run_2(:,2),'b-<', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','m');%axis square,'View Context')
hold on,

CVAE_VGG=[
0.050000        0.138629
0.100000        0.084044
0.150000        0.070009
0.200000        0.062488
0.250000        0.057695
0.300000        0.054241
0.350000        0.051744
0.400000        0.049802
0.450000        0.048145
0.500000        0.046653
0.550000        0.045347
0.600000        0.044193
0.650000        0.042945
0.700000        0.042006
0.750000        0.041166
0.800000        0.040324
0.850000        0.039463
0.900000        0.038498
0.950000        0.037331
1.000000        0.035835
];
M_CVAE_VGG=mean(CVAE_VGG(:,2))      
hCVAE_Run_2=plot(CVAE_VGG(:,1),CVAE_VGG(:,2),'r-<', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','k');%axis square,'View Context')
hold on,

CVAE_Run_1=[
0.050000        0.343336
0.100000        0.275866
0.150000        0.254600
0.200000        0.242450
0.250000        0.232684
0.300000        0.222112
0.350000        0.211676
0.400000        0.200061
0.450000        0.184472
0.500000        0.172194
0.550000        0.161133
0.600000        0.151442
0.650000        0.142145
0.700000        0.132850
0.750000        0.120731
0.800000        0.103753
0.850000        0.090158
0.900000        0.077256
0.950000        0.064207
1.000000        0.049883];
M_CVAE_Run_1=mean(CVAE_Run_1(:,2))      
hCVAE_Run_1=plot(CVAE_Run_1(:,1),CVAE_Run_1(:,2),'m--s', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','m');%axis square,'View Context')
hold on,


CVAE_Run_2 =[
0.050000        0.386742
0.100000        0.325463
0.150000        0.302810
0.200000        0.288568
0.250000        0.273563
0.300000        0.260320
0.350000        0.247675
0.400000        0.233216
0.450000        0.218817
0.500000        0.204397
0.550000        0.191132
0.600000        0.176546
0.650000        0.163425
0.700000        0.149354
0.750000        0.137199
0.800000        0.126332
0.850000        0.111684
0.900000        0.095349
0.950000        0.078012
1.000000        0.055976
];
M_CVAE_Run_2 = mean(CVAE_Run_2(:,2))      
hCVAE_Run_2 = plot(CVAE_Run_2(:,1),CVAE_Run_2(:,2),'r->', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','b');%axis square,'View Context')
hold on,

CVAE_Run_3 =[
0.050000        0.301478
0.100000        0.241550
0.150000        0.223536
0.200000        0.208445
0.250000        0.196246
0.300000        0.183200
0.350000        0.171232
0.400000        0.160339
0.450000        0.150582
0.500000        0.141688
0.550000        0.133752
0.600000        0.125854
0.650000        0.116821
0.700000        0.107201
0.750000        0.097311
0.800000        0.086044
0.850000        0.075845
0.900000        0.065480
0.950000        0.056463
1.000000        0.046792
];
M_CVAE_Run_3 = mean(CVAE_Run_3(:,2))      
hCVAE_Run_3 = plot(CVAE_Run_3(:,1),CVAE_Run_3(:,2),'b-.', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','b');%axis square,'View Context')
hold on,

CVAE_Run_4 =[
0.050000        0.302683
0.100000        0.244497
0.150000        0.221814
0.200000        0.205026
0.250000        0.191445
0.300000        0.179637
0.350000        0.168217
0.400000        0.158079
0.450000        0.148498
0.500000        0.138304
0.550000        0.129804
0.600000        0.121357
0.650000        0.111999
0.700000        0.102643
0.750000        0.093978
0.800000        0.085138
0.850000        0.076222
0.900000        0.066355
0.950000        0.056301
1.000000        0.045078
];

M_CVAE_Run_4 = mean(CVAE_Run_4(:,2))      
hCVAE_Run_4 = plot(CVAE_Run_4(:,1),CVAE_Run_4(:,2),'k-x', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','b');%axis square,'View Context')
hold on,



VMV_VGG = [
0.050000	0.324977
0.100000	0.424607
0.150000	0.483992
0.200000	0.525294
0.250000	0.548607
0.300000	0.556598
0.350000	0.542608
0.400000	0.519040
0.450000	0.499338
0.500000	0.493370
0.550000	0.482363
0.600000	0.468807
0.650000	0.437102
0.700000	0.411334
0.750000	0.362738
0.800000	0.279869
0.850000	0.187827
0.900000	0.128961
0.950000	0.080784
1.000000	0.040222];

M_VMV_VGG = mean(VMV_VGG(:,2))
hVMV_VGG = plot(VMV_VGG(:,1), VMV_VGG(:,2), 'k-d', 'LineWidth',2,'MarkerSize',8,'MarkerFaceColor','m');%axis square,'View Context')
hold on,



%axis([0 1 0 1]);
xlabel('Recall','Fontsize',12),ylabel('Precision' ,'Fontsize',12)
H=[hHCMUS_Run_1 hHCMUS_Run_2 hCVAE_Run_2 hCVAE_Run_1 hCVAE_Run_2 hCVAE_Run_3 hCVAE_Run_4 hVMV_VGG];
% 'Tran (RNIRAP1)', 'Tran (RNIRAP2)' , 'Tran (RNIRAP3)', 'Tran (BoW1)', 'Tran (BoW2)'
legend(H, 'Triet (HCMUS1)', 'Triet (HCMUS2)', 'Rey (CVAE-VGG)', 'Rey (CVAE1)', 'Rey (CVAE2)', 'Rey (CVAE3)', 'Rey (CVAE4)', 'Yuan (VMV-VGG)');
%legend(H,'Hybrid Radial Distance','D2','SHELL','LightFiedl Descriptor','Hybrid-Depth-SH')
%legend(H,'Hybrid Radial Distance','Global Radial Distance','Local Radial Distance','D2','LightFiedl Descriptor','3DOR')
xlabel('Recall','Fontsize',12),ylabel('Precision' ,'Fontsize',12)
%title('PSB database', 'FontSize',12);

box on
% axis square
axis([0 1 0 1])
%G_Hybrid =   0.6284
%G_D2 =    0.2225
%G_SHELL =    -4.8039
%G_LF_2nd =   0.5599
%G_ThreeDOR =    0.7109
    
    
%title('PSB Precision-recall Plot-Hybrid-(20 Views)')
%axis equal
%legend(H,'Shape context based View Context','Light Field Descriptor','D2','SHELL','Hybrid Descriptor')
%legend(H,'Shape context based View Context','Light Field
%Descriptor','D2','SHELL','Moments based View Context','Feature Views Moments','Hybrid Descriptor')
