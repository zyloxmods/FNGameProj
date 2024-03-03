#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "ESelectionState.h"
#include "FortGiftingUserItem.generated.h"

class UCommonTextBlock;
class UFortUserDetails;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGiftingUserItem : public UCommonButton, public IUserObjectListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortUserDetails* ItemData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayName;
    
public:
    UFortGiftingUserItem();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMessageText(const FText& NewMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSelectionState(ESelectionState NewState, bool bAnimateOnSelect);
    
    
    // Fix for true pure virtual functions not being implemented
};

