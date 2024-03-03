#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserListEntry.h"
#include "BattlePassLeaderboardListEntry.generated.h"

class UCommonTextBlock;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassLeaderboardListEntry : public UCommonUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsEntry;
    
public:
    UBattlePassLeaderboardListEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateEntryVisibility();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEntryInitialized(int32 Rank, bool bIsLocalPlayer);
    
    
    // Fix for true pure virtual functions not being implemented
};

