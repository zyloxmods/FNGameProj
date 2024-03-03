#pragma once
#include "CoreMinimal.h"
#include "CommonLazyImage.h"
#include "Styling/SlateBrush.h"
#include "onLoadingCompletedDelegate.h"
#include "EpicCMSImage.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class EPICCMSUIFRAMEWORK_API UEpicCMSImage : public UCommonLazyImage {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FonLoadingCompleted OnImageLoadingComplete;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMatchImageSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush LoadingFailFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTexture2D* ExternalMedia;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDownloadingExternalMedia;
    
public:
    UEpicCMSImage();
    UFUNCTION(BlueprintCallable)
    void SetMediaURL(const FString& MediaUrl);
    
};

