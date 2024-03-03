#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EBuildingAttachmentType.h"
#include "FortTrapTool.h"
#include "FortDecoTool_ContextTrap.generated.h"

class ABuildingSMActor;
class UFortContextTrapItemDefinition;

UCLASS(Blueprintable)
class AFortDecoTool_ContextTrap : public AFortTrapTool {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    UFortContextTrapItemDefinition* ContextTrapItemDefinition;
    
public:
    AFortDecoTool_ContextTrap();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void SetContextTrapItemDefinition(const UFortContextTrapItemDefinition* InContextTrapItemDefinition);
    
    UFUNCTION(BlueprintCallable)
    void ServerSpawnDeco_Implementation(FVector Location, FRotator Rotation, ABuildingSMActor* AttachedActor, EBuildingAttachmentType InBuildingAttachmentType);
    
    UFUNCTION(BlueprintCallable)
    void ServerCreateBuildingAndSpawnDeco_Implementation(FVector_NetQuantize10 BuildingLocation, FRotator BuildingRotation, FVector_NetQuantize10 Location, FRotator Rotation, EBuildingAttachmentType InBuildingAttachmentType);
    
};

