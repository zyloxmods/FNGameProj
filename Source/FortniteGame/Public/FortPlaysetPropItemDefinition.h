#pragma once
#include "CoreMinimal.h"
#include "FortCreativeTagsBearer.h"
#include "FortCreativeTagsHelper.h"
#include "FortItemDefinition.h"
#include "LevelSaveRecordProvider.h"
#include "FortPlaysetPropItemDefinition.generated.h"

class UFortPlaysetGrenadeItemDefinition;
class UFortPlaysetItemDefinition;
class ULevelSaveRecord;

UCLASS(Blueprintable, MinimalAPI)
class UFortPlaysetPropItemDefinition : public UFortItemDefinition, public ILevelSaveRecordProvider, public IFortCreativeTagsBearer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCreativeTagsHelper CreativeTagsHelper;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ULevelSaveRecord* ActorSaveRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortPlaysetGrenadeItemDefinition>> AssociatedPlaysetGrenades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortPlaysetItemDefinition>> AssociatedPlaysets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bExplicitlyNotBrowsable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bImplicitlyNotBrowsable: 1;
    
public:
    UFortPlaysetPropItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

