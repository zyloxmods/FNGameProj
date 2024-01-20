#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortShowdownDivisionRankButton.generated.h"

class UFortLazyImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortShowdownDivisionRankButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_DivisionIcon;
    
public:
    UFortShowdownDivisionRankButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRankButtonSelected(bool bIsSelected);
    
};

