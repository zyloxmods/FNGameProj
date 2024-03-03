#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemHeaderInformation.h"
#include "FortItemReceivedHeaderBase.generated.h"

class UCommonLazyImage;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemReceivedHeaderBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLazyImage* Image_Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Violator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Subtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Body;
    
public:
    UFortItemReceivedHeaderBase();
    UFUNCTION(BlueprintCallable)
    void SetHeaderInformation(const FFortItemHeaderInformation& HeaderInfo);
    
};

