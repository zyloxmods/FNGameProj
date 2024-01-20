#pragma once
#include "CoreMinimal.h"
#include "EFortCreativePlotPermission.h"
#include "FortCreativeWhitelistUserEntry.h"
#include "FortMatchmakingKnobsModal.h"
#include "FortCreativePermissionOptions.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCreativePermissionOptions : public UFortMatchmakingKnobsModal {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortCreativePlotPermission CurrentPermissionsEnum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCreativeWhitelistUserEntry> WhitelistedUsers;
    
    UFortCreativePermissionOptions();
    UFUNCTION(BlueprintCallable)
    void UpdatePermissions(EFortCreativePlotPermission Permissions, TArray<FString> WhiteList);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowWhitelistLimitError();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void CloseDialog();
    
};

