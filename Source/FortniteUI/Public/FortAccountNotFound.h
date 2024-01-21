#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortAccountNotFound.generated.h"

class UCommonButton;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortAccountNotFound : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* Text_Desc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Web;
    
public:
    UFortAccountNotFound();
};

