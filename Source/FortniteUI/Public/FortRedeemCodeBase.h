#pragma once
#include "CoreMinimal.h"
#include "ERedeemCodeFailureReason.h"
#include "FortActivatablePanel.h"
#include "FortRedeemCodeBase.generated.h"

class UEditableText;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRedeemCodeBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEditableText* EditableText_FriendCodeEntry;
    
public:
    UFortRedeemCodeBase();
    UFUNCTION(BlueprintCallable)
    void RedeemFriendCode(const FString& FriendCode);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRedeemFriendCodeComplete(bool bSuccess, ERedeemCodeFailureReason FailureReason);
    
};

