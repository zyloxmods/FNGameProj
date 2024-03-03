#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortEventLeaderboardTeammateEntry.generated.h"

class UCommonTextBlock;
class UFortFlagImage;
class UTexture2D;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLeaderboardTeammateEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortFlagImage* IdentityFlag;
    
public:
    UFortEventLeaderboardTeammateEntry();
    UFUNCTION(BlueprintCallable)
    void SetPlayerName(const FString& PlayerName);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerFlag(TSoftObjectPtr<UTexture2D> PlayerFlag);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardEntrySelected();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardEntryDeselected();
    
};

