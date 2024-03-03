#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortCreativePlayOptions.generated.h"

class UCommonButton;
class UFortCreativeServersView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativePlayOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCreativeServersView* View_CreativeOptionsServers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
public:
    UFortCreativePlayOptions();
private:
    UFUNCTION(BlueprintCallable)
    bool ShouldShowImportPlatformFriendsOption();
    
    UFUNCTION(BlueprintCallable)
    void ImportPlatformFriends();
    
    UFUNCTION(BlueprintCallable)
    void HandleCancelClicked();
    
};

