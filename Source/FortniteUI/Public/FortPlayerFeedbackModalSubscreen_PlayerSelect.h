#pragma once
#include "CoreMinimal.h"
#include "FortPlayerFeedbackModalSubscreenBase.h"
#include "FortPlayerFeedbackModalSubscreen_PlayerSelect.generated.h"

class UCommonButtonGroup;
class UCommonTextBlock;
class UDynamicEntryBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalSubscreen_PlayerSelect : public UFortPlayerFeedbackModalSubscreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* PlayerButtons;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* Buttons_Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_NoPlayers;
    
public:
    UFortPlayerFeedbackModalSubscreen_PlayerSelect();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCreatedPlayerList(bool bHasPlayers);
    
};

