#pragma once
#include "CoreMinimal.h"
#include "FortWeapon.h"
#include "FortWeap_BuildingToolBase.generated.h"

class AFortAthenaAIBotController;
class AFortPlayerController;
class UStaticMeshComponent;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class AFortWeap_BuildingToolBase : public AFortWeapon {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* PencilMeshComponent;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueprintPaperSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName BlueprintPencilSocket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerController* InstigatorController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* InstigatorBotController;
    
public:
    AFortWeap_BuildingToolBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UStaticMeshComponent* GetPencilMeshComponent() const;
    
};

