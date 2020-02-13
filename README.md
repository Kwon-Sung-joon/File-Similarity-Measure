# ***File-Similarity-Measure***

         
----------------------------     

## 프로젝트 소개 : 
 SHA-1(보안해시알고리즘)을 이용해 각 파일의 해시값을 구해 파일의 유사도를 측정해주는 프로그램  


----------------------------       

## Diagram
<div>
          <img width="900" src="https://user-images.githubusercontent.com/43159901/69979077-f50cd200-1570-11ea-83d2-adc59d062766.png">
          먼저 비교할 두 파일을 청크 사이즈만큼 읽어 파일을 나누어 준다.
          생성된 여러 파일들의 해쉬값을 SHA1를 이용하여 구한다. 
          SHA1 알고리즘을 이용하기 때문에 파일의 내용이 같다면 같은 해쉬값이 생성되며, 
          생성된 해쉬 값들을 비교하여 두 파일의 유사도를 측정한다.
          유사도의 측정 방법은 Sim = (Sim - Cnt)/Sim * 100 의 식을 이용하며,
          (Sim = 전체 파일의 개수 , Cnt은 해쉬 값이 다른 파일의 갯수)


----------------------------

## 사용방법:

<div>   
          <strong>***Step1***</strong>
          </br>      
          <strong><파일1> a.c</strong>
          </br>
          <img width="250" src="https://user-images.githubusercontent.com/43159901/69980744-29ce5880-1574-11ea-9e98-93bb1f8008d9.PNG">
          </br>
          <strong><파일2> b.c</strong>
          </br>
          <img width="250" src="https://user-images.githubusercontent.com/43159901/69980772-4074af80-1574-11ea-97a0-c20e743e06e7.PNG">
          </br>
          <strong><파일3> c.c</strong>
          </br>
          <img width="250" src="https://user-images.githubusercontent.com/43159901/69980809-51bdbc00-1574-11ea-9a4a-c6bcdce84205.PNG">
          </br>
          <strong>--같은 파일, 다른 파일의 예시를 위해 파일1과 파일2는 같은 파일, 파일3은 다른 파일을 예시로 든다. </strong>
          </br>


----------------------------

 
<div>   
          <strong>***Step2-1***</strong>
          </br>
          <strong><파일1>과 <파일2>의 유사도 </strong>
          </br>
          <strong>유사도 측정에 앞서 CHUNKSIZE는 10으로 통일한다.</strong>          
          </br>
          <img width="500" src="https://user-images.githubusercontent.com/43159901/69982189-33a58b00-1577-11ea-9bd6-ad74e561c3f1.PNG">
          </br>
          <strong><파일1>과 <파일2>의 유사도를 측정하는 데 생성된 파일.</strong>
          </br>
          <img width="150" src="https://user-images.githubusercontent.com/43159901/69982319-81ba8e80-1577-11ea-8f77-4ed68b36d520.PNG">
          </br>
          </br>
         --a.c파일과 b.c파일은 같은 파일이므로 두 파일의 유사도가 100%인것을 확인할 수 있다.          

----------------------------    

<div>   
          <strong>***Step2-2***</strong>
          </br>
          <strong><파일1>과 <파일3>의 유사도 </strong>
          </br>
          <img width="500" src="https://user-images.githubusercontent.com/43159901/69982548-0dccb600-1578-11ea-993b-1c9c24f6765b.PNG">
          </br>
          <strong><파일1>과 <파일3>의 유사도를 측정하는 데 생성된 파일.</strong>
          </br>
          <img width="150" src="https://user-images.githubusercontent.com/43159901/69982597-32c12900-1578-11ea-83cd-7b55f2dcccfe.PNG">
          </br>

----------------------------   

<div>   
          <strong>***Step3***</strong>
          </br>
          <strong><파일1>과 <파일3>의 결과분석 </strong>
          </br>          
          </br>
          <strong><"a.c.005"> 파일 </strong>
          </br>                    
          <img width="300" src="https://user-images.githubusercontent.com/43159901/69982774-96e3ed00-1578-11ea-93c7-a35f1ca951ac.PNG">
          </br>                    
          <strong><"c.c.005"> 파일</strong>
          </br>                                
          <img width="300" src="https://user-images.githubusercontent.com/43159901/69982849-bf6be700-1578-11ea-93d2-abd895507628.PNG">
          </br>
          <strong><"a.c.006"> 파일</strong>
          </br>                    
          <img width="300" src="https://user-images.githubusercontent.com/43159901/69983486-28079380-157a-11ea-8095-2cbfb151708d.PNG">
          </br>
          <strong><"c..006"> 파일</strong>                                        
          </br>                    
          <img width="300" src="https://user-images.githubusercontent.com/43159901/69983525-43729e80-157a-11ea-8978-7ced09cb7556.PNG">
          </br>
         --Step2-2에서 얻은 해쉬 값이 다른 파일 .005, 006 파일을 열어서 비교해 보았을 때 다른 부분이 있는 것을 알 수 있다.
          

----------------------------   



