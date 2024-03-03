#pragma once
#include "CoreMinimal.h"
#include "FriendCode.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortFriendCodeListBase.generated.h"

class UDynamicEntryBox;
class UFortFriendCodeEntryBase;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortFriendCodeListBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFriendCode> BacchusFriendCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortFriendCodeEntryBase> FriendCodeEntryClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_FriendCodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* WarningText;
    
public:
    UFortFriendCodeListBase();
    UFUNCTION(BlueprintCallable)
    void JustDesc();
    
    UFUNCTION(BlueprintCallable)
    void DescAndURL();
    
    UFUNCTION(BlueprintCallable)
    void CloseAndPopDialog();
    
};

