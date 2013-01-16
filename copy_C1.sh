#//******************************************************************************** 
#  ******************************************************************************** 
#     1. 모델별 Platform 공개 소스 취합 완료한 후
#     2. GoogleOrig 폴더가 사용자 홈 디렉토리에 위치하였다고 가정.. 
#     3. cp.sh 파일을 모델별 공개소스 Platform 폴더 밑에 복사
#         사용자 홈 디렉토리 위치 확인 방법 : cd ~/ 엔터후 이동하는 경로 
#     4. cp -rfv ./모델공개소스폴더  ~/구글orig폴더 
# **********************************************************************************
# ********************************************************************************** //
cp -rfv ./build /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
cp -rfv ./external /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
cp -rfv ./frameworks /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
cp -rfv ./vendor /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
cp -rfv ./build.sh /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
#cp -rfv ./libcore /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
#cp -rfv ./packages /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1
#cp -rfv ./hardware /home/yyoung.kim/KOR_ANDR_JB_OSS_Google-C1