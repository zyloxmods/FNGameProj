#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortAthenaNewsTile.generated.h"

class UCommonBorder;
class UCommonTextBlock;
class UEpicCMSImage;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaNewsTile : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* CMSImage_NewsImage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NewsTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NewsBody;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* Border_AdSpace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AdSpace;
    
public:
    UFortAthenaNewsTile();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetDefaultImage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnim();
    
};

