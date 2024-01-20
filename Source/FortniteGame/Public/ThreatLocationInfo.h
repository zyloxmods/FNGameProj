#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Engine/NetSerialization.h"
#include "EFortThreatDeactivationType.h"
#include "ThreatLocationInfo.generated.h"

class AFortThreatVisualsManager;
class AThreatCloud;

USTRUCT(BlueprintType)
struct FThreatLocationInfo : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CloudLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBox ThreatVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortThreatVisualsManager* ThreatVisualsManager;
    
    UPROPERTY(EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AThreatCloud> CloudActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bThreatActivated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortThreatDeactivationType DeactivationType;
    
    FORTNITEGAME_API FThreatLocationInfo();
};

