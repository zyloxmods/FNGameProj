#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaChallengeRewardDisplay.generated.h"

class UDynamicEntryBox;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeRewardDisplay : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_CompletionIcon;
    
public:
    UAthenaChallengeRewardDisplay();
};

