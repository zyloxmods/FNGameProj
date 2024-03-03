#pragma once
#include "CoreMinimal.h"
#include "FortServerTileBase.h"
#include "FortServerInfoTileBase.generated.h"

class UCommonTextBlock;
class UDynamicEntryBox;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortServerInfoTileBase : public UFortServerTileBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_ServerFriendList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_OwnerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* VerticalBox_Ownership;
    
public:
    UFortServerInfoTileBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RequestUpdateBackgroundImage(int32 FriendListHash);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwnerNameUpdated();
    
};

