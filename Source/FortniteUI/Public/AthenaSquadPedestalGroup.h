#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ESubGame.h"
#include "AthenaSquadPedestalGroup.generated.h"

class AFortTeamMemberPedestal;
class USceneComponent;

UCLASS(Abstract, Blueprintable)
class AAthenaSquadPedestalGroup : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubGame UsedSubgame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MonitoredSquadIdx;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortTeamMemberPedestal*> MemberPedestals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* PedestalChildrenRoot;
    
public:
    AAthenaSquadPedestalGroup();
};

