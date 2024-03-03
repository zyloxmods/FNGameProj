#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EpicCMSSimpleMessage.generated.h"

class UCommonTextBlock;
class UEpicCMSImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class EPICCMSUIFRAMEWORK_API UEpicCMSSimpleMessage : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TitleText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* BodyText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEpicCMSImage* PrimaryImage;
    
public:
    UEpicCMSSimpleMessage();
};

