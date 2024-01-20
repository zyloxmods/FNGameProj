#pragma once
#include "CoreMinimal.h"
#include "FortItem.h"
#include "FortMetadataItem.generated.h"

class UFortMetadataItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMetadataItem : public UFortItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InstanceId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TemplateId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMetadataItemDefinition* ItemDefinition;
    
public:
    UFortMetadataItem();
};

