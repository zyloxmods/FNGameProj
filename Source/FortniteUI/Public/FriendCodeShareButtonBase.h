#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FriendCode.h"
#include "Templates/SubclassOf.h"
#include "FriendCodeShareButtonBase.generated.h"

class UCommonTextBlock;
class UFortFriendCodeListBase;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFriendCodeShareButtonBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCode> BacchusFriendCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortFriendCodeListBase> FriendCodeListClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* NumSharesRemainingText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* InviteCodeMessage;
    
public:
    UFriendCodeShareButtonBase();
    UFUNCTION(BlueprintCallable)
    void OnQueryUnredeemedFriendCodesComplete(bool bSuccess, const TArray<FFriendCode>& FriendCodes);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNumSharesUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnFriendCodeIssued(bool bSuccess, const FFriendCode& FriendCode);
    
};

