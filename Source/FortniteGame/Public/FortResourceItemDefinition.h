#pragma once
#include "CoreMinimal.h"
#include "EFortReplicatedStat.h"
#include "EFortResourceType.h"
#include "FortCreativeTagsBearer.h"
#include "FortCreativeTagsHelper.h"
#include "FortWorldItemDefinition.h"
#include "FortResourceItemDefinition.generated.h"

UCLASS(Blueprintable)
class UFortResourceItemDefinition : public UFortWorldItemDefinition, public IFortCreativeTagsBearer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortResourceType ResourceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortReplicatedStat::Type> AccumulatingStatType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeTagsHelper CreativeTagsHelper;
    
public:
    UFortResourceItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

