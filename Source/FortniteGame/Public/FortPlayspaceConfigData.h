#pragma once
#include "CoreMinimal.h"
#include "EPlayspaceCreationType.h"
#include "FortPlayspaceConfigData.generated.h"

class APlayspace;

USTRUCT(BlueprintType)
struct FFortPlayspaceConfigData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<APlayspace> PlayspaceClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPlayspaceCreationType CreationType;
    
    FORTNITEGAME_API FFortPlayspaceConfigData();
};

