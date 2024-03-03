#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaCollectionPlayerProgress.generated.h"

class UCommonTextBlock;
class UFortSocialAvatarIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaCollectionPlayerProgress : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Progress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialAvatarIcon* AvatarIcon;
    
public:
    UAthenaCollectionPlayerProgress();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocalPlayer() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumCollected() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShowPlayerInfoSet(bool bShowPlayerInfo);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPlayerProgressInitialized(bool bIsLocalPlayer, int32 NumCollected, int32 NumToCollect);
    
};

