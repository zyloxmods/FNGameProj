#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortSaveFileBuildingInstructionsHandler.generated.h"

class AFortPlayerController;
class UFortBuildingInstructions;

UCLASS(Blueprintable, Config=Game)
class AFortSaveFileBuildingInstructionsHandler : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SaveFileName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LoadedBuildingsScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LoadedBuildingsAdditionalTranslation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseAbsoluteCoordinates: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTrackDestroyedBuildings: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortBuildingInstructions> DefaultBuildingInstructions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLoadInvisible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDespawnOnBuildingsSpawned: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bSpawnBuildingsAutomaticallyAfterLoad: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl OperationUserId;
    
public:
    AFortSaveFileBuildingInstructionsHandler();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool SaveBuildings(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool ResetBuildings();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void LoadBuildings(AFortPlayerController* FortPC);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool AreBuildingsLoaded();
    
};

