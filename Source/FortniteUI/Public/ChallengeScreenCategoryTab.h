#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "ChallengeScreenCategoryTab.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UChallengeScreenCategoryTab : public UCommonButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_TabName;
    
    UChallengeScreenCategoryTab();
};

