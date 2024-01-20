#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "EFOBFileHeaderStatus.h"
#include "FOBCoreChoice.generated.h"

class UFortBuildingInstructions;
class UFortFOBCoreDecoItemDefinition;

USTRUCT(BlueprintType)
struct FFOBCoreChoice : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortFOBCoreDecoItemDefinition* FOBCoreDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFOBFileHeaderStatus FileHeaderStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    FString CoreFilename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    UFortBuildingInstructions* BuildingInstructions;
    
    FORTNITEGAME_API FFOBCoreChoice();
};

