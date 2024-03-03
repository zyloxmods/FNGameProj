#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EFortCollectedState.h"
#include "Blueprint/IUserListEntry.h"
#include "AthenaCollectionListEntry.generated.h"

class UCommonTextBlock;
class UImage;
class UObject;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionListEntry : public UCommonButton, public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Number;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ItemName;
    
public:
    UAthenaCollectionListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntryReset();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntryImageSet();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnEntryIconLoaded(UObject* EntryIcon);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollectionStateSet(EFortCollectedState CollectedState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnCollectedByFriendSet(bool bCollectedByFriend);
    
    
    // Fix for true pure virtual functions not being implemented
};

