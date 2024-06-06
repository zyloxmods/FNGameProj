#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortCreativeUserPrefabItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortCreativeUserPrefabItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName UserSaveContentName;
    
public:
    UFortCreativeUserPrefabItemDefinition(const FObjectInitializer& ObjectInitializer);
};

