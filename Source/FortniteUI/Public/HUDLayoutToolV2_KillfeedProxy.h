#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortMobileHUDElementProxy.h"
#include "HUDLayoutToolV2_KillfeedProxy.generated.h"

class UFortDynamicEntryBox;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_KillfeedProxy : public UFortMobileHUDElementProxy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag NumberOfKillfeedLinesTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDynamicEntryBox* EntryBox_KillFeedText;
    
public:
    UHUDLayoutToolV2_KillfeedProxy();
};

