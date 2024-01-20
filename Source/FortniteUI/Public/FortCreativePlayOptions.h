#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCreativePlayOptions.generated.h"

class UCommonButton;
class UFortAthenaMatchmakingWidget;
class UFortCreativeServersView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativePlayOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeServersView* CreativeOptionsServers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* PlayButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* CancelButton;
    
public:
    UFortCreativePlayOptions();
protected:
    UFUNCTION(BlueprintCallable)
    bool ShouldShowImportPlatformFriendsOption();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetMatchmakingWidget(UFortAthenaMatchmakingWidget* InWidget);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ImportPlatformFriends();
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleCancelClicked();
    
};

