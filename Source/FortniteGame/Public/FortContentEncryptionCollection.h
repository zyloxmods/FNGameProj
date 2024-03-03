#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EFortContentEncryptionAllowedReferences.h"
#include "EFortContentEncryptionCollectionGrouping.h"
#include "FortContentEncryptionCollection.generated.h"

USTRUCT(BlueprintType)
struct FFortContentEncryptionCollection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCollectionReference Collection;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortContentEncryptionCollectionGrouping Grouping;
    
    UPROPERTY(Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortContentEncryptionAllowedReferences AllowedReferences;
    
    FORTNITEGAME_API FFortContentEncryptionCollection();
};

