#pragma once
#include "CoreMinimal.h"
#include "PinnedSchematicsRecord.generated.h"

USTRUCT(BlueprintType)
struct FPinnedSchematicsRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PinnedSchematicInstances;
    
    FORTNITEGAME_API FPinnedSchematicsRecord();
};

