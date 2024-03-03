#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "FortGenericDataStoreMapWrapper.h"
#include "FortGenericDataStoreManagerComponent.generated.h"

class UObject;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortGenericDataStoreManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<UClass*, FFortGenericDataStoreMapWrapper> ClassToNameMapping;
    
public:
    UFortGenericDataStoreManagerComponent();
    UFUNCTION(BlueprintCallable)
    bool RemoveNamedStoreByType(const FName StoreName, const UClass* ClassType);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UObject* GetNamedStoreByType(const FName StoreName, const UClass* ClassType) const;
    
    UFUNCTION(BlueprintCallable)
    UObject* AddNamedStoreByType(const FName StoreName, const UClass* ClassType);
    
};

